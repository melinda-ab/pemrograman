#include <iostream>
using namespace std;

int main(){
    int x;
    bool bil = true;
    cout<<" Periksa bilangan prima"<<endl;
    cout<<" Masukan bilangan: ";
    cin>>x;
    if(x<=1){
        cout<<" Bilangan "<<x<<" bukan bilangan prima"<<endl;
    } else{
        for(int i=2; i<x; i++){
            if(x%i == 0){
                bil = false;
            }
        }
    }
    if(bil){
        cout<<" Bilangan "<<x<<" adalah bilangan prima"<<endl;
    } else{
        cout<<" Bilangan "<<x<<" bukan bilangan prima"<<endl;
    }
    return 0;
}