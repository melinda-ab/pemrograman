#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<" Mencari bilangan terbesar kedua"<<endl;
    cout<<" Banyak nilai dalam daftar: ";
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++){
        cout<<" Nilai ke-"<<(i+1)<<" : ";
        cin>>x[i];
    }
    int max = x[0];
    int kedua = x[0];
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
        if(max<x[i]){
            kedua = max;
            max = x[i];
        } else if(x[i]>kedua && x[i]!=max){
            kedua = x[i];
        }
        }
    }
    cout<<" Nilai kedua terbesar adalah: "<<kedua<<endl;
    return 0;
}