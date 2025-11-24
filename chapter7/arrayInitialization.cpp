#include<iostream>

using namespace std;

int main(){
    // 5 integers
    int arr[5] = {1,2,3,4,5}; // declaration + initialization

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";

    }

        cout<<endl;
    // reverse array

    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
}