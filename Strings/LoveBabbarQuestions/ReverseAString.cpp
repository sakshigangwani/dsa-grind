#include <iostream>
using namespace std;

int main()
{
    char name[20];
    
    cout << "Enter your name: ";
    cin >> name;
    int count = 0;
    int i = 0;
    
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    
    int start = 0;
    int end = count - 1;
    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    
    cout << endl;
    
    cout << "Reversed name is: ";
    cout << name;
    return 0;
}