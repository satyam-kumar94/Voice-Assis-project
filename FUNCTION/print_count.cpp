#include<iostream>
using namespace  std;

void printcount(int num){
    for(int i = 1; i<=num; i++){
        cout<< i<< " ";

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    printcount(n);
    return 0;
}