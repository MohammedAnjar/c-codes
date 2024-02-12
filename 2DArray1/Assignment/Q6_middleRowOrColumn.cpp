/*Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.*/

#include<iostream>
using namespace std;




int main (){

    int n;
    cout<<"No. of Row ";
    cin>>n;

    int m;
    cout<<"No. of column ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // TwoDarray(arr);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}