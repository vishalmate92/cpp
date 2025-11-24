#include<iostream>
using namespace std;
int main(){
    string s = "Vishal";
    cout<<"Original string: "<<s<<endl;

    // reversing the string
    // method 1: using two pointer approach
    // int n = s.length();
    // int i = 0;
    // int j = n - 1;
    // while(i < j){
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    // method 2: using function
    reverse(s.begin(), s.end());
    cout<<"Reversed string: "<<s<<endl;
}