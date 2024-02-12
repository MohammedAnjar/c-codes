#include<iostream>
using namespace std;

int main (){

    int m;
    cout<<"No. of Rows ";
    cin>>m;

    int n;
    cout<<"No. of Column ";
    cin>>n;
    
    int arr[m][n];
    int sum = 0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
    }
    cout<<sum<<endl;
}