#include<iostream>
using namespace std;

int main(){

    int m;
    cout<<"No. of Row ";
    cin>>m;

    int n;
    cout<<"No. of Column ";
    cin>>n;

    int arr[m][n];

    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){

            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int t[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }

    for(int i=0 ; i<n; i++){
        for(int j=0; j<m; j++){

            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}