#include<iostream>

using namespace std;

int main(){
    //OR Opretor
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    if((n%5==0 || n%3==0) && (n%15!=0)) {
        cout<<"Divisible by 5 and 3 but not by 15";
    }
    else if((n%5==0 || n%3==0) && (n%15==0)) {
        cout<<"Divisible by 5 and 3 and also by 15";
    }
    else {
        cout<<"Not Divisible by 5 and 3 and also not by 15";
    }
}