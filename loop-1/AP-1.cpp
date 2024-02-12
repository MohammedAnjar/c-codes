#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    // 4 7 10 13 16 .....
    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a + 3;
    }
}