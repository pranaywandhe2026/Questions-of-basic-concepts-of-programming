#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<(n/2)-1){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
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