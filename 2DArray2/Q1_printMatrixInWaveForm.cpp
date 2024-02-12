/*time 51:15
input 
1 2 3
4 5 6
7 8 9
output
1 2 3 6 5 4 7 8 9
*/
#include<iostream>
using namespace std;

int main (){

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

    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){

                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1; j>=0; j--){

            cout<<arr[i][j]<<" ";
            }
        }
        
    }
}