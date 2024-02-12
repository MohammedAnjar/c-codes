#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter key : ";
    int key,count=0;
    cin>>key;

    for(int i=0; i<n; i++){

        if(key<arr[i]) count++;
    }
    cout<<count<<endl;
}