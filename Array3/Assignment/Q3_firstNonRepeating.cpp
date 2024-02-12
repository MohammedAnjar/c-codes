#include<iostream>
#include<vector>
using namespace std;

void nonrepeat(vector<int>& v, int n){
    int key=0;
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){ 
                key=v[i];
                flag=0;
            }
            else key=v[i];
        }
    }
    
    if(flag==0) cout<<key<<"Non Repeating"<<endl;
    else cout<<key<<"Repeating element"<<endl;
}

int main (){

    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    

    nonrepeat(v,n);
    
}