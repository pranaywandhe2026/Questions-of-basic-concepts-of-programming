#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(v[i]>0 && v[j]<0) {swap(v[i],v[j]);
        i++;
        j--;
        }
    }
}

int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }   
    sort(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }   
}