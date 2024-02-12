//Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m;
    cout<<"No. of Row ";
    cin>>n;
    cout<<"No. of Column ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //int i;
    int max=INT_MIN;
    int sum=0;
    int row=0; 
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            
            sum += arr[i][j];
            if(max<sum){ 
                max=sum;
                row = i+1;
                }

        }
    }
    cout<<row;

}