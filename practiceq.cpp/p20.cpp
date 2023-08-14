#include<bits/stdc++.h>
using namespace std;
void mergesort(vector<int> & v1,vector<int> &v2,vector<int> &v3){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<v1.size()-1 && j<v2.size()-1 && k<v3.size()-1){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
            k++;
        }
        else if(v2[j]<v2[i]){
            v3[k]=v2[j];
            j++;
            k++;
        }

    }
}
int main(){
    vector<int> v1(4);
    for(int i=0;i<v1.size();i++){
        cin>>v1[i];
    }
    vector<int> v2(6);
    for(int i=0;i<v2.size();i++){
        cin>>v2[i];
    }
    vector<int> v3(10);
   mergesort(v1,v2,v3);
    
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}