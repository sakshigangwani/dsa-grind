#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int size = 6;

    for(int i=0; i<size-1; i++)
    {
        int mini = i;
        for(int j=i; j<size; j++)
        {
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}