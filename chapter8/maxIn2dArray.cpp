#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {
        {40,98},
        {63,75},
        {67,89},
        {60,92}
    };
    int mx = INT_MIN;
    for(int i=0;i<4;i++){ // rows
        for(int j=0;j<2;j++){ // columns    
            mx = max(mx,arr[i][j]);
}
    }
    cout<<mx;
    return 0;
}
