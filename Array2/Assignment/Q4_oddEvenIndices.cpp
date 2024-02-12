#include<iostream>
using namespace std;

int oddEven(int a[], int n){
        int sum = 0, sum1 = 0;
    for(int i=0; i<n; i++){
        if(i%2==0) sum += a[i];
        
        else sum1 += a[i];

    }
    return (sum - sum1);
}
int main (){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    cout<<"Diffrence is "<<oddEven(arr,n);
}