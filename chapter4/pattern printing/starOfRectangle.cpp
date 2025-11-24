#include<iostream>
using namespace std;
int main(){
    // rows -> m, cols -> n
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of cols : ";
    cin>>n;

    for(int i=1;i<=m;i++){ // rows = m
        for(int j=1;j<=n;j++){ // cols = n
            cout<<"* ";
        }
        cout<<endl;
    }

}