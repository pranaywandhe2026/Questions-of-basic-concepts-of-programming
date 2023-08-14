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
        if(v[i]==v[i+1]){
           v[i]=v[i+1];
           v[(i+1)]=v[i+2];
           n--;
        }
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if()
    //         // if(v[i]>v[j]){
    //         //     int temp=v[i];
    //         //     // v[i]=v[j];
    //         //     // v[j]=temp;
    //         // }
    //     }
    // }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}