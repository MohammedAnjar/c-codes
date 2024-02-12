#include<iostream>
using namespace std;
void display(int a[], int k, int y){
    int count = 0;
    for(int i=0; i<k; i++){
        if(a[i]>y) count++;
    }
    cout<<count<<" ";
}
int main(){

    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter key : ";
    cin>>x;

    display(arr,n,x);
}