#include<iostream>
using namespace std;
int main(){
    // rows -> n, cols -> n
    int n;
    cout<<"Enter the number of rows / cols : ";
    cin>>n;

    for(int i=1;i<=n;i++){ // rows = n
        for(int j=1;j<=n;j++){ // cols = n
            cout<<"* ";
        }
        cout<<endl;
    }

}