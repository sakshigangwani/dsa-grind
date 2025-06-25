#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int nums[5] = {3, 4, 5, 1, 2};
    int n = 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
        if (count > 1)
        {
            cout << "Array is not sorted";
        }
    }
    cout << "Array is sorted";
    return 0;
}