#include <iostream>
using namespace std;

int factorial(int x){
    if(x==0){
        return 1;
    } else{
        return (x*factorial(x-1));
    }
}


int main(){
    int x;
    cout<<" Menghitung faktorial"<<endl;
    cout<<" Masukan angka: ";
    cin>>x;
    int y = factorial(x);
    cout<<" Nilai dari "<<x<<"! adalah: "<<y<<endl;
}