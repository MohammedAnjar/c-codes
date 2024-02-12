#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter number  : ";
    cin>>n;
    int a = 1;
    int b = 1;
    int sum = 0;

    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){

        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
        
    }

}