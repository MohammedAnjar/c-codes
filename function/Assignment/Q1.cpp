#include<iostream>
using namespace std;
int squre(int a){
    
    return a * a;
}

int main (){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<squre(i)<<endl;
    } 
    
}