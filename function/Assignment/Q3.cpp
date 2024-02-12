#include<iostream>
using namespace std;
void fun(int a, int b){
    int odd;
    for(int i=min(a,b); i<=max(a,b); i+=2){
        odd = i;
        cout<<odd<<" ";
    }
    
}
int main (){

    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    fun(a,b);

}