#include<iostream>
using namespace std;

int main(){
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    bool flag = false;

    for(int i=n-1; i>=1; i--){
        int count = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                count++;
            }
        }
        if(count == 0){
            flag = true;
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}