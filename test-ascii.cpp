/*
Author: Sakib Khan 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B
Asks user to input a line
of text and will report 
all characters.
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Input: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        cout << s[i] << " " << (int)s[i] << endl;
    return 0;
}
