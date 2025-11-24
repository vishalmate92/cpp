#include<iostream>

using namespace std;

int main(){
    int x = 3, y, z;
    y = x = 10; //operation works from right to left
    z = x < 10; // this is read as a condition and the answer is false so the value will be 0 and for true is 1

    cout<<x<<" "<<y<<" "<<z;
}