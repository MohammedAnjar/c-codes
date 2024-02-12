#include<iostream>
#include<vector>
using namespace std;

int main (){

    vector<int> v;
    v.push_back(3);
    v.push_back(8);
    v.push_back(34);
    v.push_back(8);
    v.push_back(2);
    v.push_back(0);

    cout<<"enter key ";
    int x;
    cin>>x;
int idx = -1;

    // for(int i=0; i<v.size(); i++){

    //     if(v[i]==x) idx = i;
    // }
    // cout<<idx<<endl;

    for(int i=v.size()-1; i>=0; i--){

        if(v[i]==x){ 
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;
}