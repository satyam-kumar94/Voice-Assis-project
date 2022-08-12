// // Write a program to calculate the sum of the digits of a 3-digit number.
#include <iostream>
using namespace std;
int main()
{
       int n,sum=0;
       cout <<"enter your digit " <<endl;
       cin>>n;
       sum=n%10 + (n/10)%10 + (n/100);

       cout << sum << endl;
    



    }
    