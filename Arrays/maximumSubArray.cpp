#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int nums[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currSum += nums[i];
        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << maxSum;
    return 0;
}