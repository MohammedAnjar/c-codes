#include<iostream>
#include<climits>
using namespace std;

int main (){

    int m;
    cout<<"No. of Rows ";
    cin>>m;

    int n;
    cout<<"No. of Column ";
    cin>>n;
    
    int arr[m][n];
    int min = INT_MAX;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    cout<<min<<endl;
}