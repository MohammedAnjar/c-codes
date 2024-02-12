#include<iostream>
using namespace std;
int number(int i){
    int count = 0;
    while(i>0){

        int last = i%10;
        i = i/10;
        count++;
    }
    return count;
}

int squre(int a){
    
    return a * a;
}

int main (){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    int num = number(n);
    cout<<num<<endl;
    cout<<squre(num)<<endl;

    


}