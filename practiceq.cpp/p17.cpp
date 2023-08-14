#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int noz=0;
    int noo=0;
    int notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else if(i<(noo+noz)) v[i]=1;
        else v[i]=2;
    }
}
void sort2(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    int k=n/2;
    while(i<k && k<j){
         for(int i=0;i<n;i++){
        if(v[k]==1 && v[j]==2) k++;
        

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