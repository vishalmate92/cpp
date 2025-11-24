#include<iostream>

using namespace std;

int main() {
    // using extra temp variable
    int x = 5;
    int y = 2;
    int temp;

    cout<<x<<" "<<y<<endl;

    // temp = x;
    // x = y;
    // y = temp;

    // cout<<x<<" "<<y<<endl;

    // without using extra temp variable

    x = x + y;
    y = x - y;
    x = x - y;
    
    cout<<x<<" "<<y<<endl;
}