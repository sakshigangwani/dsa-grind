#include <iostream>
#include <limits>
#include <set>
using namespace std;

bool containsDuplicate(int nums[], int n){
    set<int> s;
    for(int i=0; i<n; i++){
        if(s.count(nums[i])) return true;
        s.insert(nums[i]);
    }
    return false;
}

int main()
{
    int nums[4] = {1, 2, 3, 1};
    bool result = containsDuplicate(nums, 4);
    cout << result;
    return 0;
}