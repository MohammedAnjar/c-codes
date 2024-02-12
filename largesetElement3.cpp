#include<iostream>
using namespace std;

int main (){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is gretest"<<endl;
        }
        else{ // c > a , a > b --> c>a>b
            cout<<c<<" is gretest"<<endl;
        }
    }
    else{ // b > a
            if(b>c){
                cout<<b<<" is gretest"<<endl;
            }
            else{ // c > b
                cout<<c<<" is gretest"<<endl;
            }
    }
}