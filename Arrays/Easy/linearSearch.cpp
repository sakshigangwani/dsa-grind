#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int target = 5;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout << "Element is present";
            return 0;
        }
    }

    cout << "Element is not present";
    return 0;
}