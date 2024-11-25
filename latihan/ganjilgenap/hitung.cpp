#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<" Menentukan bilangan ganjil atau genap"<<endl;
    cout<<" Masukan suatu bilangan: ";
    cin>>x;
    int y = x%2;
    if(y==0){
        cout<<" Bilangan "<<x<<" merupakan bilangan genap"<<endl;
    } else if(y==1){
        cout<<" Bilangan "<<x<<" merupakan bilangan ganjil"<<endl;
    }
    return 0;
}