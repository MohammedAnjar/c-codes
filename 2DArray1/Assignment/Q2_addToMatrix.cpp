//Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;

int main (){

    int n1,m1;
    cout<<"1st matrix"<<endl;
    cout<<"No. of row ";
    cin>>n1;
    cout<<"No. of column ";
    cin>>m1;
    int arr[n1][m1];

    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int n2,m2;
    cout<<"2nd matrix"<<endl;
    cout<<"No. of row ";
    cin>>n2;
    cout<<"No. of column ";
    cin>>m2;
    int brr[n2][m2];

    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            brr[i][j] += arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

}