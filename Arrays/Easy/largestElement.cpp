#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int arr[5] = {2, 5, 1, 3, 0};
    int max = INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max;
    return 0;
}