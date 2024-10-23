#include <iostream>
using namespace std;

int euclidean(int x, int y){
    int a=x%y;
    if(a==0){
        return y;
    }else{
        return euclidean(y,a);
    }
}

int main(){
    int x, y;
    cout<<" Angka dibagi: ";
    cin>>x;
    cout<<" Angka membagi: ";
    cin>>y;
    int b = euclidean(x,y);
    cout<<" FPB adalah "<<b<<endl;
    return 0;
}