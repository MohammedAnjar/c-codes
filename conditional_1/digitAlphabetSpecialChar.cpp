#include<iostream>
using namespace std;

int main (){

    char ch;
    cout<<"Enter value : ";
    cin>>ch;

    int ascii = (int)ch;

    if((ascii>=65 && ascii<=90 )|| (ascii>=97 && ascii<=122)){
        cout<<"Alphabet";
    }
    else if(ascii>=48 && ascii<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special character";
    }


}