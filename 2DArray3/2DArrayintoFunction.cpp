#include<iostream>
using namespace std;
void change(int arr[][3]){

    arr[0][0] = 100;
}

int main (){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    change(arr);
    cout<<arr[0][0];
}