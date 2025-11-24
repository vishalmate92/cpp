#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    // cin considers space as a delimiter
    // cin>>s;
    // getline function is used
    // to take input with spaces
    getline(cin,s); 
    cout<<s;
}