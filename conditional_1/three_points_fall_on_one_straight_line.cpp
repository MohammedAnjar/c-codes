//three points fall on one straight line.
#include<iostream>
using namespace std;

int main (){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter x1 , y1 : ";
    cin>>x1>>y1;

    cout<<"Enter x2 , y2 : ";
    cin>>x2>>y2;

    cout<<"Enter x3 , y3 : ";
    cin>>x3>>y3;

    int slop1 = (y2-y1)/(x2-x1);
    int slop2 = (y3-y2)/(x3-x2);

    if(slop1 == slop2){
        cout<<"All three points fall on one straight line"<<endl;
    }
    else{
        cout<<"All three points are not fall on one straight line"<<endl;
    }
}