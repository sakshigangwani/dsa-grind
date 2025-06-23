#include<iostream>
#include<limits>
using namespace std;

void reverseAnArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {10, 20, 33, 1, 45};
    reverseAnArray(arr, 5);
    return 0;
}