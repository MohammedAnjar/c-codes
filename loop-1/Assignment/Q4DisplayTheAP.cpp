#include<iostream>
using namespace std;

int main (){

    //4 7 10 13 16 ...upto N
    int n;
    cout<<"Enter the Value : ";
    cin>>n;

    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a + 3; // d=3
    }
}