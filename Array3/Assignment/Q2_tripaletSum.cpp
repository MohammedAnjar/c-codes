//Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;

void sum(vector<int>& v, int key){
          int count=0;
          int n=v.size();
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    for(int k=j+1; k<n; k++){
                        if(v[i]+v[j]+v[k]==key){
                            count++;
                          
                        }
                    }
                }
            }
            cout<<count<<" ";
            
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
    int k;
    cout<<"Enter key : ";
    cin>>k;

    sum(v,k);
}