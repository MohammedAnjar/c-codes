/*
Write a program to print the matrix in wave form.
Input :
1 2 3
4 5 6
7 8 9
Output : 7 4 1 2 5 8 9 6 3 
*/
#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"No. of row ";
    cin>>n;
    cout<<"No. of Column ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=n-1; i>=0; i--){
            cout<<arr[i][j]<<" ";
        }
    }
    else{
            for(int i=0; i<n; i++){
                cout<<arr[i][j]<<" ";
            }
        }

    }
}