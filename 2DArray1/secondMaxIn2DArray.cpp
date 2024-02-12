#include<iostream>
#include<climits>
using namespace std;

int main (){

    int max = INT_MIN;
    int smax = INT_MIN; 
    int m;
    cout<<"No. of rows ";
    cin>>m;

    int n;
    cout<<"No of Column ";
    cin>>n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(max<arr[i][j]) max = arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(max!=arr[i][j] && smax<arr[i][j]) smax = arr[i][j];
        }
    }cout<<endl;

    cout<<smax;

}