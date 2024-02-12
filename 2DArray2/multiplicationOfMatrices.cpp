#include<iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter No. of Row ";
    cin>>m;
    int n;
    cout<<"Enter No. of Column ";
    cin>>n;

    int p;
    cout<<"Enter No. of Row ";
    cin>>p;
    int q;
    cout<<"Enter No. of Column ";
    cin>>q;
    
    

    if(n==p){
        cout<<"Enter element of 1st matrix"<<endl;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter element of 2nd matrix"<<endl;
    int b[p][q];
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;

    int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<p; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
                    
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrices cannot multiplaied"<<endl;
    }

}