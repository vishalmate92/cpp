#include<iostream>

using namespace std;

int main(){
    //OR Opretor
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;

    if(a>b && a>c) {
        cout<<"Greatest is : "<<a;
    }
    else if(b>a && b>c) {
        cout<<"Greatest is : "<<b;
    }
    else {
        cout<<"Greates is : "<<c;
    }
}