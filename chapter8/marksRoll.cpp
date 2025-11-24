#include<iostream>
using namespace std;
int main(){
    int a[4][2] = {{40,98},{63,75},{67,89},{60,92}};
    for(int j=0;j<2;j++){ // rows
        for(int i=0;i<4;i++){ // columns
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}