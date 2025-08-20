#include <cctype>
#include <iostream>
#include <string>
using namespace std;

char invert(char c)
{
    return islower(c) ? c = toupper(c) : c = tolower(c);
}

int main()
{
    char str = ' ';
    cout << "enter char: ";
    cin >> str;
    cout << invert(str) << endl;
}