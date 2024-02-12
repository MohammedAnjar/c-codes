/*
Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7
*/
#include<iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter size of row / Column ";
    cin>>m;
    int arr[m][m];
    //input
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //transpose
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<endl;
    // 90 degree anti-clock wise 
    for(int i=m-1; i>=0; i--){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}