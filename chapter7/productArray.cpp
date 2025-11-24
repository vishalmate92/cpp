#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,3,5,2,1,5};
    int n = sizeof(arr)/4;
    int sum = 1;
    for(int i=0;i<n;i++){
        sum *= arr[i];
    }
    cout<<sum;

}