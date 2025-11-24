#include<iostream>

using namespace std;

int main() {
    // run 100 times
    for(int i=1;i<=100;i++){
        if(i%2!=0)
        cout<<i<<endl;
    }

    // run 50 times

    for(int i=1;i<=99;i=i+2){
        if(i%2!=0)
        cout<<i<<endl;
    }

}