#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int count=0;
    int a = n;

    for(int i=1; n>0; i++){
        
            
            n=n/10;
            count++;
            
    }
    if(a==0) cout<<"1";
   else cout<<count<<endl;
}