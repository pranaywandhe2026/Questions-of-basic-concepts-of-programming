#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"x=";
    cin>>x;
    int lastoccurence;
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            lastoccurence=i;
        }
    }
    cout<<lastoccurence;
}