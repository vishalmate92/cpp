#include<iostream>

using namespace std;

int main() {

   /* 
   // run 172 times
    for(int i=19;i<=190;i++){
        if(i%19==0)
        cout<<i<<endl;
    }

     // run 10 times
    for(int i=19;i<=190;i=i+19){
        cout<<i<<endl;
    }
  */

    int n;
    cout<<"Enter Value of N : ";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n*i<<endl;
    }
}