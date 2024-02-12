#include<iostream>
using namespace std;

bool duplicate(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    if(duplicate(arr,n)) cout<<"Contain duplicate"<<endl;
    else cout<<"Not Contain duplicate"<<endl;
}
