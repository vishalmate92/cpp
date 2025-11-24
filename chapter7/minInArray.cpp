#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,3,5,2,1,25};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=0;i<n;i++){
        // if(arr[i]<mx) mn = arr[i];
        mn = min(mn,arr[i]);
    }
    cout<<mn;
}