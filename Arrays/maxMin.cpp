#include<iostream>
#include<limits>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5] = {10, 20, 33, 1, 45};
    int max = getMax(arr, 5);
    int min = getMin(arr, 5);
    cout << "Maximum element in an Array: " << max << endl;
    cout << "Minimum element in an Array: " << min;
}