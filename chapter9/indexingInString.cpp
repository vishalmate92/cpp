#include<iostream>
using namespace std;
int main(){
    string s = "Vishal Mate";
    // indexing in string
    // V i s h a l   M a t e
    cout<<s[0]<<endl; // V
    cout<<s<<endl; 
    //updation of string
    s[0] = 'S';
    s[2] = 'm';
    
    cout<<s<<endl;
}