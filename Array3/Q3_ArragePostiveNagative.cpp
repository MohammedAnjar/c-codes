//-ve number in starting and +ve in ending
#include<iostream>
#include<vector>
using namespace std;

void arrange(vector<int>& v){

    int i=0;
    int j=v.size()-1;

    while (i<j)
    {
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){

            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;

        }
    }
    
}
int main (){

    vector<int> v;

    v.push_back(1);
    v.push_back(-11);
    v.push_back(0);
    v.push_back(0);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(-10);
    v.push_back(0);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

    arrange(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
