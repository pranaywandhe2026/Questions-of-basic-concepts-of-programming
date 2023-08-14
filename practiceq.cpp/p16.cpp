#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int countp=0;
    int countn=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>0) countp++;
        else countn++;
    }
    for(int i=0;i<v.size();i++){
        if(i<countp && v[i]>0) {
            
        }
        else if(i<countp && v[i]<0){
            for(int i=0;i<v.size();i++){
                if(v[i]>0) 
            }
        }
    }
}
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        cin>>v[i];
    }  
    sort(v);
    for(int i=0;i<5;i++){
        cout<<v[i];
    }  
}