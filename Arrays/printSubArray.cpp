#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int max = -1;

    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum += arr[end];
            if(max < currSum){
                max = currSum;
            }
        }
    }
    cout << max;
    return 0;
}