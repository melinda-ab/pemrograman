#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    float ipk;
};

void search(mahasiswa data[],int n, string x){
    int y=0, i=0;
    while (y==0 && i<=(n-1)){
        if(x == data[i].nim){
            y=1;
            cout<<" NIM Mahasiswa: "<<data[i].nim<<endl;
            cout<<" Nama Mahasiswa: "<<data[i].nama<<endl;
            cout<<" IPK Mahasiswa: "<<data[i].ipk<<endl;
            cout<<endl;
        } else{
            i+=1;
        }
    }
    if (y == 0) {
        cout << "Mahasiswa dengan NIM " << x << " tidak ditemukan." << endl;
    }
}


int main(){
    int n;
    string x;
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
    
    cout<<" NIM Mahasiswa yang dicari: ";
    cin>>x;
    cout<<endl;
    search(data,n,x);
    return 0;
}

