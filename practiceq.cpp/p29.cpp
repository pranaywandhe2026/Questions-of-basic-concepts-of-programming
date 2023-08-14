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
   int idx=-1;
   int i=n-2;
   while(i>=0){
    
    if(v[i]<v[i+1]){
        idx=i;
        
    }
    i--;
   }
   if(idx==-1){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
        }
   }
    int j=idx+1;
    int k=n-1;
    while(j<k){
        swap(v[j],v[k]);
        j++;
        k--;
    }
    
    if(idx==0){
        swap(v[idx],v[n-1]);
        swap(v[idx],v[idx+1]);
    }
    else{
        swap(v[idx],v[idx+1]);
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}