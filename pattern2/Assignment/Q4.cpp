#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"No. of lines : ";
    cin>>n;
    
    int m = n-1;
    int nsp = 1;
    int a = 64;
    for(int i=1; i<=2*n-1; i++){
        cout<<(char)(a+i);
    }
    cout<<endl;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<(char)(a+j);
            a++;
        }

        for(int k=1; k<=nsp; k++){
            cout<<" ";
            a++;
        }
        nsp += 2;

        for(int j=1; j<=m+1-i; j++){
            cout<<(char)(a+j);
            a++;
        }
        cout<<endl;
    }
}