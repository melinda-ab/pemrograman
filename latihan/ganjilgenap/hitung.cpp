#include <iostream>
using namespace std;

int main(){
    int n; 
    int genap = 0;
    int ganjil = 0;
    cout<<" Menentukan jumlah bilangan ganjil atau genap"<<endl;
    cout<<" Jumlah angka dalam daftar: ";
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++){
        cout<<" Bilangan ke-"<<(i+1)<<": ";
        cin>>x[i];
        if(x[i]%2==0){
            genap++;
        } else{
            ganjil++;
        }
    }
    cout<<" Terdapat "<<genap<<" bilangan genap"<<endl;
    cout<<" Terdapat "<<ganjil<<" bilangan ganjil"<<endl;
    return 0;
}