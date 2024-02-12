#include<iostream>
using namespace std;
void mulAdd(int a[], int n){
    for(int i=0; i<n; i++){

        if(i%2==0) a[i] += 10;
        else a[i] *= 2;
        
    }

    for(int i=0; i<n; i++) cout<<a[i]<<" ";
   
}
int main (){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    mulAdd(arr,n);
    

    
}