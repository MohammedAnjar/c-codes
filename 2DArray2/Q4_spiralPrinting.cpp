#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"No. of Row : ";
    cin>>n;
    int m;
    cout<<"No. ofColumn : ";
    cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int minr = 0, minc = 0;
    int maxr = n-1, maxc = m-1;

    while(minr<=maxr && minc<=maxc){
        //Right
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        //Down
        if(minr>maxr || minc>maxc) break;
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        //Left
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //Up
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}