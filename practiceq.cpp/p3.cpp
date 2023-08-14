#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    vector<int> v2(v.size());
    for(int i=0;i<v.size();i++){
        v2[i]=v[v.size()-1-i];
        cout<<v2[i]<<endl;
    }
    
    }