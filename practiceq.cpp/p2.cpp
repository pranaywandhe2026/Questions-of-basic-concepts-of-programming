#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(8);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"x=";
    cin>>x;
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<" ,"<<j<<")";
            }
        }
    }
    
}