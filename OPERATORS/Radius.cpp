// Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
#include<iostream>
using namespace std;
int main(){
    int Radius;
    cout << "Enter Radius of circle " << endl;
    cin >> Radius;

    cout << "perimeter is " << 2 * 3.14 *Radius << endl;
    cout << "area is " << 3.14  * Radius *Radius << endl;
    return 0;

}