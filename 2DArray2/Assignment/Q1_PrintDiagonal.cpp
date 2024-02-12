/*Write a program to print the elements of both the diagonals in a square matrix.
input 
1 2 3
4 5 6
7 8 9
output
1   3
  5  
7   9
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of matrix n x n ";
    cin>>n;

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || (i%2==0 && j%2==0)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}