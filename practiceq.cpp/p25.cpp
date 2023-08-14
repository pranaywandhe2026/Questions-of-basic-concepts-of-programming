#include<bits/stdc++.h>
using namespace std;
void duplicateremoval(vector<int> &v,vector<int> &v2){
    int n=v.size();
    int i=0;
    int j=1;
    
    while(i<n-1 && j<n ){
        if(v[i]==v[j]){
            int temp=v[i];
            v2.push_back(temp);
          
        }
        
        j++;
        if(j==n-1){
            i++;
            j=i+1;
        }
    }
}
int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> v2;
    duplicateremoval(v,v2);
     for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}