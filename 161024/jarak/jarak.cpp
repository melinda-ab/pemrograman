#include <iostream>
#include <cmath>
using namespace std;

void jarak(int x1, int y1, int x2, int y2){
    float d;
    d = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<d;
}

int main(){
    int x1,y1,x2,y2;;
    cout<<" Menentukan Jarak Kedua Titik"<<endl;
    cout<<" Input titik pertama : ";
    cin>>x1>>y1;
    cout<<" Input titik kedua   : ";
    cin>>x2>>y2;
    cout<<endl;
    cout<<" Jarak antara kedua titik adalah ";
    jarak(x1, y1, x2, 2);
    cout<<endl;
    return 0;
}