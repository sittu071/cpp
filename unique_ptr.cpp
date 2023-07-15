#include <cstring>
#include <iostream>
#include <memory>

using namespace std;

class File
{
    private:
        unique_ptr<char[]> fileName;

    public:
        File(const char* fname);
        File(const File& other);
        File(File&& other) noexcept;
        void display();
};

File::File(const char* fname):fileName(nullptr)
{
    int len = strlen(fname) + 1;
    fileName = make_unique<char[]>(len);
    strcpy(fileName.get(),fname);
    cout<<"Parameter constructor called\n";
}

File::File(const File& other)
{
    int len = strlen(other.fileName.get()) + 1;
    fileName = make_unique<char[]>(len);
    strcpy(this->fileName.get(),other.fileName.get());
    cout<<"Copy constructor called\n";
}

File::File(File&& other) noexcept:fileName(move(other.fileName))
{
    other.fileName =nullptr;
    cout<<"Move constructor called\n";
}

void File::display()
{
    cout<<fileName.get()<<endl;
}



int main()
{

    File file("file1.txt");
    File file1(file);
    File movefile = move(file);
    file1.display();

    return 0;
}
