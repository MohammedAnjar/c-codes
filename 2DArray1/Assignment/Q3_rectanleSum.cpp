/*Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"No. of row ";
    cin>>n;
    int m;
    cout<<"No. of Column ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Enter l1,r1,l2,r2"<<endl;
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    

    int sum = 0;

    for(int i=min(l1,l2); i<=max(l1,l2); i++){
        for(int j=min(r1,r2); j<=max(r1,r2); j++){
            sum += arr[i][j];
        }
    }
    cout<<sum<<endl;
}