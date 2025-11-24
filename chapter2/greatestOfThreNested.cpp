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

    // a>b and a>c -> a>c -> a greatest
    if(a>b){
        if(a>c){
             cout<<a<<" is greatest";
        }
        else{ // c>a , a>b -> c>a>b
             cout<<c<<" is greatest";  
        }
    }
    else{ // b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{ // c>b , c>b>a
            cout<<c<<" is greatest";
        }
    }
}