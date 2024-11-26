#include <iostream>
using namespace std;

int main(){
    int genap = 0;
    int ganjil = 0;
    cout<<" Menentukan jumlah bilangan ganjil atau genap"<<endl;
    int x[5]={1,2,3,4,5};
    cout<<" Dalam daftar terdapat: ";
    for(int i=0; i<5; i++){
        cout<<x[i]<<" ";
        if(x[i]%2==0){
            genap++;
        } else{
            ganjil++;
        }
    }
    cout<<endl;
    cout<<" Terdapat "<<genap<<" bilangan genap"<<endl;
    cout<<" Terdapat "<<ganjil<<" bilangan ganjil"<<endl;
    bool test = true;
    int expectedgenap = 2;
    int expectedganjil = 3;
    if (ganjil!=expectedganjil || genap!=expectedgenap){
        bool test = false;
    }
    if(bool test = true){
        cout<<" Test passed!"<<endl;
    } else{
        cout<<" Test failed!"<<endl;
    }
    return 0;
}