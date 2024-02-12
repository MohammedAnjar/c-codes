#include<iostream>
#include<vector>
using namespace std;
int main (){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    while(i<j){

        if(arr[j]==1) j--;
        if(arr[i]==0) i++;
        //if(i>j) break;
        else if(arr[i]==1 && arr[j]==0){

            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0; i<n; i++){
        
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
}