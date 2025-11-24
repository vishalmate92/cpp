#include<iostream>

using namespace std;

int main() {
// // one way
//     int n;
//     cout<<"Enter Value of N : ";
//     cin>>n;
// // 1 3 5 7 9...
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<endl;
//     }

// second way
    int n;
    cout<<"Enter Value of N : ";
    cin>>n;
    // 4 7 10 13...
    int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a += 3;
    }

}