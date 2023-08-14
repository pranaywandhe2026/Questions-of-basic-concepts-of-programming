#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    int a[n][n];
    int fill=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(fill<=(n*n)){
                a[i][j]=fill;
            }
            fill++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}