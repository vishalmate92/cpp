#include<iostream>
using namespace std;
int main(){
    string s = "Vishal";
    cout<<s<<" "<<s.length()<<endl;
   // s = s + " Mate";
    s = "Mate " + s;
    cout<<s<<" "<<s.length()<<endl;
}