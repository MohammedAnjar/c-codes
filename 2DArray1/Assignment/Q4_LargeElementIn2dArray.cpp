//Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;

int main  (){

    int n,m;
    cout<<"No. of Row : ";
    cin>>n;
    cout<<"No. of Column : ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }

    cout<<max<<endl;
    
}