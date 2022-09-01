#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}
int getsum(int arr[],int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;
    cout << *p << endl;
    update(p);
    cout << *p << endl;

    int arr[5] = {1,2,3,4,5};
    cout<<getsum(arr,5)<<endl;
}

/*QS--2
    void fun(int a[]){
        cout<<a[0]<< " ";
    }
    int main(){
        int a[] = {1,2,3,4};
        fun(a+1);
        cout<<a[0];
    } */

/*  QS- 3
void square(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}
int main(){
    int a = 10;
    square(&a);
    cout<<a<<endl;
}*/
