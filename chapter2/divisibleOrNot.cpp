#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    if(n % 5 == 0) {
        cout<<"Yes is divisible";
    }      
    else {
        cout<<"Not divisible";
    }    
    
    return 0;
}