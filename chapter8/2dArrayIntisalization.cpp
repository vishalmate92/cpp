#include<iostream>
using namespace std;
int main(){
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0;i<3;i++){ // rows
        for(int j=0;j<3;j++){ // columns    
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
}
    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i=0;i<3;i++){ // rows
        for(int j=0;j<4;j++){ // columns    
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}
    return 0;
}