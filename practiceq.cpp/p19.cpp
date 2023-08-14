#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int low=0;
    int mid1=0;
    int mid2=0;
    int high=v.size()-1;
    while(mid2<=high){
        if(v[mid2]==3){
            swap(v[mid2],v[high]);
            high--;
        }
        else if(v[mid2]==0){
            swap(v[mid2],v[low]);
            low++;
            mid1++;
            mid2++;
        }
        else if(v[mid2]==1){
            swap(v[mid2],v[mid1]);
            low++;
            mid1++;
            mid2++;
        }
        else mid2++;
    }
}
int main(){
    vector<int> v(8);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}