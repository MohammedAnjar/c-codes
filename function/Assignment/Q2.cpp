#include<iostream>
using namespace std;
int radius(float r){

    float s = 3.14*r*r;
    return s;
}

int main (){

    float r;
    cout<<"Enter value of r : ";
    cin>>r;

    cout<<radius(r);
}