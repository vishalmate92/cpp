#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,34,43,5,21,10,5};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;

}