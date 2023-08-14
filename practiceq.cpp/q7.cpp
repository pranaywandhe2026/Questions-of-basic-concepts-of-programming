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
    int current=INT_MIN;
    int previous=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>current){
            previous=current;
            current=v[i];
            if(previous<current) count++;
            // count--;
        } 
    }
    if(count==n) cout<<"sorted";
    else cout<<"not sorted";
}