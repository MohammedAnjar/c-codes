#include<iostream>
#include<climits>
using namespace std;

int thirdLarge(int arr[], int n){
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;

    for(int i=0; i<n; i++){
        if(max<arr[i]) {

            smax = max;
            max = arr[i];
        
        }  
        if(max!=arr[i] && smax<arr[i]){

            tmax = smax;
            smax = arr[i];
        }
        if(max!=arr[i] && (smax!=arr[i] && tmax<arr[i])){

            tmax = arr[i];
            
        }
        
    }
    cout<<max<<endl;
    cout<<smax<<endl;
    return tmax;

}

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];  
    }
    
    
    cout<<thirdLarge(arr,n);
}