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
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                flag=true;
            }
        }
    }
    if(flag==true) cout<<"not sorted";
    else cout<<"sorted";
}