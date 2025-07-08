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
    
    cout << endl;
    
    cout << "Your count is: ";
    cout << count;
    return 0;
}