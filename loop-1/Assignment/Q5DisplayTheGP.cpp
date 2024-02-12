#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    // 3 12 48
    int a=3;
    for(int i=1; i<=n; i++){

        cout<<a<<endl;
        a = a * 4;
    }


}