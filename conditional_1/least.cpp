#include<iostream>
using namespace std;

int main (){

    int a,b,c;
    cout<<"Enter num1 : "<<endl;
    cin>>a;
    cout<<"Enter num2 : "<<endl;
    cin>>b;
    cout<<"Enter num3 : "<<endl;
    cin>>c;

    if(a<b){
        if(a<c){
            cout<<a<<" is least"<<endl;
        }
        else{ // c<a
            cout<<c<<" is least"<<endl;
        }
    }
    else{ // b<a
        if(b<c){
            cout<<b<<" is least"<<endl;
        }
        else{ // c<b
            cout<<c<<" is least"<<endl;
        }
    }
}