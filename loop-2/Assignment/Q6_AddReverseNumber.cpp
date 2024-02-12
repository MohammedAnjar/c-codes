// 12 --> [12+21] = 33
#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    int reverse =0;
    int lastDigit = 0;
    int temp = n;
    while(n>0){

        reverse *= 10;
        lastDigit = n %10;
        reverse = reverse + lastDigit;;
        n /= 10;
    }
    cout<<reverse + temp;

}