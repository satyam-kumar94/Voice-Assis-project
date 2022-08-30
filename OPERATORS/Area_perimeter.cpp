// Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.
#include<iostream>
using namespace std;
int main(){
      int a,b;
      cout<<"Enter Value: " <<endl;
      cin>>a>>b;
      

      cout << "Area is: " << a*b << endl;
      cout << "perimeter is: " << 2*(a+b) << endl;
      return 0;

}