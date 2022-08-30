#include<bits/stdc++.h>
using namespace std;

int getsum(int *arr,int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout<<getsum(arr+3,3)<<endl;
}