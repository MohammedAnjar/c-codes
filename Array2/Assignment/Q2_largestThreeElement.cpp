#include<iostream>
#include<climits>
using namespace std;
void LargeThree(int arr[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>max1){

            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }

    if(max1 == INT_MIN || max2 == INT_MIN ||max3 == INT_MIN)cout<<"No maximum value"<<endl;
    else cout<<max1<<" "<<max2<<" "<<max3<<endl;
}

int main(){

    int n;
    cout<<"Array size : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];

    }

    LargeThree(arr,n);
}
