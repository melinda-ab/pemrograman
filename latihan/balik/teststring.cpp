#include <iostream>
using namespace std;

int main(){
    string x ="Hello";
    cout<<" Membalik kata-kata"<<endl;
    cout<<" Masukin sebuah kata: "<<x<<endl;
    int n=x.length();
    for(int i=0; i<n/2; i++){
        char temp = x[i];
        x[i]=x[n-i-1];
        x[n-i-1]=temp;
    }
    cout<<" Kata yang sudah dibalik: "<<x<<endl;
    string balik ="olleH";
    if(x==balik){
        cout<<" Test passed!"<<endl;
    } else{
        cout<<" Test failed!"<<endl;
    }
    return 0;
}