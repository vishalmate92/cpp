#include<iostream>

using namespace std;

int main() {
    // run 100 times
    for(int i=1;i<=100;i++){
        if(i%2==0)
        cout<<i<<endl;
    }

    // run 50 times

    for(int i=2;i<=100;i=i+1){
        if(i%2==0)
        cout<<i<<endl;
    }

}