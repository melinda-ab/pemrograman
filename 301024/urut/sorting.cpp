#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    float ipk;
};

void sort(mahasiswa data[],int n){
    mahasiswa t;
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=(n-2);j++){
            if (data[j].ipk < data [j+1].ipk || 
            (data[j].ipk == data [j+1].ipk && data[j].nim < data [j+1].nim)){
                t=data[j];
                data[j]=data[j+1];
                data[j+1]=t;
            }
        }
    }
}


int main(){
    int n;
    cout<<" Jumlah mahasiswa: ";
    cin>>n;
    mahasiswa data[n];
    for(int i=0;i<=(n-1);i++){
        cout<<" Nama Mahasiswa: ";
        cin>>data[i].nama;
        cout<<" NIM Mahasiswa: ";
        cin>>data[i].nim;
        cout<<" IPK Mahasiswa: ";
        cin>>data[i].ipk;
        cout<<endl;
    }
    sort(data, n);
    
    cout<<" Data Mahasiswa Setelah Sorting"<<endl;
    for(int i=0;i<=(n-1);i++){
        cout<<" NIM Mahasiswa: "<<data[i].nim<<endl;
        cout<<" Nama Mahasiswa: "<<data[i].nama<<endl;
        cout<<" IPK Mahasiswa: "<<data[i].ipk<<endl;
        cout<<endl;
    }
    return 0;
}

