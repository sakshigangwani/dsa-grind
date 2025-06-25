#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {0, 1, 0, 3, 12};
    int n = 5;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[index], nums[i]);
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}