#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {23,122,41,67};
    cout << "Address of 1st Memory block: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of 1st Memory block: " << &arr[0] << endl;

    cout << "4th no " << *arr << endl;
    cout << "5th no " << *arr + 1 << endl;
    cout << "6th no " << *(arr + 1) << endl;
    cout << "7th no " << arr[2] << endl;
    cout << "8th no " << *(arr + 2) << endl;

    int i = 3;
    cout<< i[arr]<<endl;

    return 0;
}