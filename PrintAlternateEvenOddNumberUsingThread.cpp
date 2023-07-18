#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool isOddPrinted = false;

void printEven(int start, int end)
{
    for (int i = start; i <= end; i += 2)
    {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !isOddPrinted; });
        std::cout << "Even: " << i << std::endl;
        isOddPrinted = true;
        lock.unlock();
        cv.notify_one();
    }
}

void printOdd(int start, int end)
{
    for (int i = start; i <= end; i += 2)
    {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return isOddPrinted; });
        std::cout << "Odd: " << i << std::endl;
        isOddPrinted = false;
        lock.unlock();
        cv.notify_one();
    }
}

int main()
{
    int start = 1;
    int end = 10;

    std::thread t1(printEven, start, end);
    std::thread t2(printOdd, start, end);

    t1.join();
    t2.join();

    return 0;
}
