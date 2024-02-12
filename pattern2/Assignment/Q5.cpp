#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"No. of lines : ";
    cin>>n;

    int nsp = 1;
    int m = n - 1;


    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<j;
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp += 2;
        
        for(int j=1; j<=m+1-i; j++){
            cout<<j;
        }
        cout<<endl;
}
}