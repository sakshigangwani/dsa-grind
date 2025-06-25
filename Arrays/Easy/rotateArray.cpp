#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;

    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}