#include <iostream>
using namespace std;

int main(){
    string x, y;
    int n;
    cout<<" Membalik kata-kata"<<endl;
    cout<<" Masukin sebuah kata: ";
    cin>>x;
    n=x.length();
    for(int i=0; i<n/2; i++){
        char temp=x[i];
        x[i]=x[n-i-1];
        x[n-i-1]=temp;
    }
    cout<<" Kata tersebut dibalik menjadi: "<<x<<endl;
    return 0;
}