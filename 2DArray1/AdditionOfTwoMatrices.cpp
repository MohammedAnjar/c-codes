#include<iostream>
using namespace std;

int main (){

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{10,11,12},{13,14,15},{16,17,18}};
    //a
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //b
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //sum
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            b[i][j] += a[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}