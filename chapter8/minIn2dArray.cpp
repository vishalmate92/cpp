#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{40,98},{63,75},{67,89},{60,92}};
    int mn = INT_MAX;
    for(int i=0;i<4;i++){ // rows
        for(int j=0;j<2;j++){ // columns    
            mn = min(mn,arr[i][j]);
}
    }
    cout<<mn;
    return 0;
}
