#include <iostream>
using namespace std;

void sort (int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n1,n2;
    cout<<" Menggabungkan 2 daftar"<<endl;
    cout<<" Jumlah angka dalam daftar 1: ";
    cin>>n1;
    int x[n1];
    for(int i=0; i<n1; i++){
        cout<<" Angka ke-"<<(i+1)<<" dalam daftar 1: ";
        cin>>x[i];
    }
    cout<<" Jumlah angka dalam daftar 2: ";
    cin>>n2;
    int y[n2];
    for(int i=0; i<n2; i++){
        cout<<" Angka ke-"<<(i+1)<<" dalam daftar 2: ";
        cin>>y[i];
    }
    int z[n1+n2];
    for(int i = 0; i < n1; i++){
        z[i] = x[i];
    }
    for(int i = 0; i < n2; i++){
        z[n1 + i] = y[i];
    }
    sort(z, n1+n2);
    cout<<" Daftar gabungan yang sudah diurutkan: ";
    for (int i = 0; i<n1 + n2; i++) {
        cout<<z[i]<<" ";
    }
    cout << endl;

    return 0;
}