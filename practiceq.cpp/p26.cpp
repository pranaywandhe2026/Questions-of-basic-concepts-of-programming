#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int n=v.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
        else mid++;
    }
}
int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}