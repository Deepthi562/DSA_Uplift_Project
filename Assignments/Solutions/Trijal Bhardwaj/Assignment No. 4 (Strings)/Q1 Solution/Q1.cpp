/*
Question 1
Given two strings str1 and str2, write program to swap two strings
I/P :
str1="C++" , str2="Java"
O/P :
str1="Java" , str2="C++"
*/

#include <iostream>
using namespace std;
int main() {
    string s1, s2, temp;
    cout << "Enter String 1 : ";
    getline(cin, s1);
    cout << "Enter String 2 : ";
    getline(cin, s2);
    temp = s1;
    s1 = s2;
    s2 = temp;
    cout << "\nTwo Strings After Swapping are : \n\n";
    cout << "String 1 : " << s1 << endl;
    cout << "String 2 : " << s2 << endl;
    return 0;
}
