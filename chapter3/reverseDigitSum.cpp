#include<iostream>

using namespace std;

int main() {
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   int original = n;
    int r = 0;
    while(n != 0){
    int last_digit = n % 10;
    r = r * 10 + last_digit;
    n /= 10;
}
    int sum = original + r;
    cout << sum;
    
}