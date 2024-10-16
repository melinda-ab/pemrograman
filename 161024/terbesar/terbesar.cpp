#include <iostream>
using namespace std;

void abc(int a,int b,int c){
    if (a >= b && a >= c) {
        cout<<a;
    } else if (b >= a && b >= c) {
        cout<<b;
    } else {
        cout<<c;
    }
}

int main (){
    int a,b,c;
    cout<<" Menentukan Bilangan Terbesar"<<endl;
    cout<<" Input bilangan pertama : ";
    cin>>a;
    cout<<" Input bilangan kedua   : ";
    cin>>b;
    cout<<" Input bilangan ketiga  : ";
    cin>>c;
    cout<<endl;
    cout<<" Bilangan terbesar adalah ";
    abc(a,b,c);
    cout<<endl;
    return 0;
}