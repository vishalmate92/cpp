#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    int i = 1;

    while(i <= n) {
        int fact = 1;
        int j = 1;

        while(j <= i) {
            fact *= j;
            j++;
        }
        cout<<i<<"!="<<fact<<endl;
        i++;
   
}
}