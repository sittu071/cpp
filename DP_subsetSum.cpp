#include <iostream>
#include <vector>
using namespace std;
 
// Returns true if there exists a subsequence of `A` with the given sum
bool subsetSum(vector<int> const &A, int k)
{
    // total number of items
    int n = A.size();
 
    // `T[i][j]` stores true if subset with sum `j` can be attained
    // using items up to first `i` items
    bool T[n + 1][k + 1];
 
    // if 0 items in the list and the sum is non-zero
    for (int j = 1; j <= k; j++) {
        T[0][j] = false;
    }
 
    // if the sum is zero
    for (int i = 0; i <= n; i++) {
        T[i][0] = true;
    }
 
    // do for i'th item
    for (int i = 1; i <= n; i++)
    {
        // consider all sum from 1 to sum
        for (int j = 1; j <= k; j++)
        {
            // don't include the i'th element if `j-A[i-1]` is negative
            if (A[i - 1] > j) {
                T[i][j] = T[i - 1][j];
            }
            else {
                // find the subset with sum `j` by excluding or including the i'th item
                T[i][j] = T[i - 1][j] || T[i - 1][j - A[i - 1]];
            }
        }
    }
 
    // return maximum value
    return T[n][k];
}
 
// Subset Sum Problem
int main()
{
    // Input: a set of items and a sum
    vector<int> A = { 3, 34, 4, 12, 5, 2 };;
    int k = 1;
 
    if (subsetSum(A, k)) {
        cout << "Subsequence with the given sum exists";
    }
    else {
        cout << "Subsequence with the given sum does not exist";
    }
 
    return 0;
}
