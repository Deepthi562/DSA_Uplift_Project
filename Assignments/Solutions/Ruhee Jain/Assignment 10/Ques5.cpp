/*

Question 5

https://www.geeksforgeeks.org/recursive-program-prime-number/

*/

#include <iostream>
using namespace std;
 
bool isPrime(int n, int i = 2)
{
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}
 
int main()
{
    int n;
    cin>>n;
    if (isPrime(n))
        cout << "Yes, it is a prime number";
    else
        cout << "No, it is not a prime number";
    return 0;
}
