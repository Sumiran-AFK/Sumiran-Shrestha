#include<iostream>
using namespace std;

int main()
{
    string name;
    cout << "May I know your name";
    getline(cin,name); /*it takes all the strings in the line until you hit enter*/
    cout<< "Welcome Mr./Mrs." << name << "\n";
    
    int a, b, c;
    cout << "Enter 2 numbers";
    cin >> a >> b;
    c = a + b;
    cout << "The adddition is " << c << "\n";
    return 0;
}
