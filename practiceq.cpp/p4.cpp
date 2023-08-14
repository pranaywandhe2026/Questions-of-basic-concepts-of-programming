#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v,int i,int j){
    
    while(i<=j){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
     }
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int k;
    cout<<"k=";
    cin>>k;
    if(k>n) k=k%n;
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);
    }