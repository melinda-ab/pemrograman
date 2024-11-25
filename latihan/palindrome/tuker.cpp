#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<" Perika palindrome"<<endl;
    cout<<" Bilangan yang akan dicheck: ";
    cin>>x;
    int z = x;
    int y = 0;
    while(x>0){
        y = y*10 + x%10;
        x = x/10;
    }
    if(y==z){
        cout<<" Bilangan "<<z<<" adalah bilangan palindrome"<<endl;
    } else{
        cout<<" Bilangan "<<z<<" bukan bilangan palindrome"<<endl;
    }
    return 0;
}