#include<iostream>
using namespace std;

int main(){
    int a[] = {23,45,3,45,554,32,4};
    int n = sizeof(a)/4;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    // revese

    int i =0, j = n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
}
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}