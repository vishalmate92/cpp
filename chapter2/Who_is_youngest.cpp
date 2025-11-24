#include<iostream>

using namespace std;

int main(){
    //OR Opretor
    int a,b,c;
    cout<<"Enter age of Ram : ";
    cin>>a;
    cout<<"Enter age of Shyam : ";
    cin>>b;
    cout<<"Enter age of Navi : ";
    cin>>c;

    if(a<b){
        if(a<c){
             cout<<"Ram is youngest";
        }
        else{ 
             cout<<"Navi is youngest";  
        }
    }
    else{
        if(b<c){
            cout<<"Shyam is youngest";
        }
        else{ 
            cout<<"Navi is youngest";
        }
    }
}