#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(i%2!=0){
            v[i]=v[i]*2;
        }
        else v[i]=v[i]+10;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}