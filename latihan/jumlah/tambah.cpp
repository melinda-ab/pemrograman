#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<" Menjumlahkan angka-angak dalam daftar"<<endl;
    cout<<" Jumlah angka dalam daftar: ";
    cin>>n;
    int x[n];
    int y=0;
    for(int i=0; i<n; i++){
        cout<<" Angka ke-"<<(i+1)<<" : ";
        cin>>x[i];
        y = y + x[i];
    }
    cout<<" Jumlah semua angka dalam daftar adalah "<<y<<endl;
    return 0;
}