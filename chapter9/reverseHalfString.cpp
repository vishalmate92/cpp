#include<iostream>
using namespace std;
int main(){
    string s = "Vishal";
    cout<<"Original string: "<<s<<endl;
    int n = s.length();
    reverse(s.begin(), s.begin() + 3);
    cout<<"Reversed half string: "<<s<<endl;
//     int i = 0;
//     int j = n/2 - 1;
//     while(i < j){
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++;
//         j--;
//     cout<<"Reversed half string: "<<s<<endl;
// }
    return 0;
}