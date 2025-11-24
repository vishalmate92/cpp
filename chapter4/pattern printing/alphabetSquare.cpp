#include<iostream>
using namespace std;
int main(){
    // rows -> m, cols -> n
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){ // rows = m
        for(int j=1;j<=n;j++){ // cols = n
            cout<<(char)(j+96)<<" ";
            
        }
        cout<<endl;
    }

}