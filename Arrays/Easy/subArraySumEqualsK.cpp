#include <iostream>
using namespace std;

//BRUTE-FORCE

// int main()
// {
//     int arr[10] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
//     int n = 10;
//     int maxLength = 0;
//     int k = 3;

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         int count = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             count++;
//             if(sum == k){
//                 if(maxLength < count){
//                     maxLength = count;
//                 }
//             }
//         }
//     }

//     cout << maxLength;
// }

