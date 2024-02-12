//swap using third variable

#include<iostream>
using namespace std;

int main (){

    int a,b;
    cin>>a>>b;
    // using 3rd variable
    // int temp = a;

    // a = b;
    // b = temp;
    
    // using without 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<a<<" "<<b;

}