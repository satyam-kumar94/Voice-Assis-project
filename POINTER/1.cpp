#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num = 5;
    cout << num << endl;

    cout << "Address :" << &num << endl;

    int *ptr = &num;

    cout << "Value :" << *ptr << endl;
    cout << "Address :" << ptr << endl;

    cout << "Size of Pointer: " << sizeof(ptr) << endl;

    double d = 3.4;
    double *p2 = &d;
    cout << "Value :" << *p2 << endl;
    cout << "Address :" << p2 << endl;

    cout << "Size of Pointer: " << sizeof(p2) << endl;

    char c = 's';
    char *p3 = &c;
    cout << "Value :" << *p3 << endl;
    cout << "Address :" << p3 << endl;
}