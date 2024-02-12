#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    int key;
    cout<<"Enter key you want to search : ";
    cin>>key;

    bool flag = false;

    for(int i=0; i<n; i++){

        if(arr[i]==key) flag = true;
    }

    if(flag == true) cout<<"Element is present"<<endl;
    else cout<<"Element is not present"<<endl;
}