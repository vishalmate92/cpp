#include<iostream>

using namespace std;

void swap(int& x, int& y){

    int temp = x;
    x = y;
    y = temp;

}

int main() {
    // using extra temp variable
    int x = 5;
    int y = 2;
    int temp;

    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}