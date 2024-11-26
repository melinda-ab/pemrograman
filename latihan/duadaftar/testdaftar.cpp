#include <iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

bool test(int arr1[], int arr2[], int n){
    for(int i=0; i<n; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<" Menggabungkan 2 daftar"<<endl;
    int x[4]={1,3,4,7};
    int y[6]={1,2,5,6,8,9};
    int g[10]={1,1,2,3,4,5,6,7,8,9};
    int z[10];
    for(int i=0; i<4; i++){
        z[i]=x[i];
    }
    for(int i=0; i<6; i++){
        z[4+i]=y[i];
    }
    cout<<" Daftar sebelum diurutkan: ";
    for(int i=0; i<10; i++){
        cout<<z[i]<<" ";
    }
    sort(z, 10);
    cout<<endl;
    cout<<" Daftar setelah diurutkan: ";
    for(int i=0; i<10; i++){
        cout<<z[i]<<" ";
    }
    cout<<endl;
    if(test(z,g,10)==true){
        cout<<" Test passed!"<<endl;
    } else{
        cout<<" Test failed!"<<endl;
    }
    return 0;
}