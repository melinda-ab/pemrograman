#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<" Menentukan nilai maksimum"<<endl;
    cout<<" Banyak nilai dalam daftar: ";
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++){
        cout<<" Nilai ke-"<<(i+1)<<" : ";
        cin>>x[i];
    }
    int max = x[0];
    for(int i=0; i<n; i++){
        if(max<x[i]){
            max = x[i];
        }
    }
    cout<<" Nilai maksimum adalah: "<<max<<endl;
    return 0;
}