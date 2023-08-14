#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int previous;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            
            if(i==0 && v[i]>v[j]){
                v[i]=v[j];
            }
            else if(i>0){
                if(v[i]>v[j] && v[i]!=v[i-1]){
                v[i]=v[j];
            }
            }
        }
    }
}
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}