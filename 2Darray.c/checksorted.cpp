#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,7,9,8};
    int n=5;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    bool flag=true;
   for(int i=0;i<n;i++){
        if(arr[i]!=v[i] && arr[i]!=v[i+1]){
            flag=false;
            break;
        }
        else if(arr[n-1]!=v[n-1] && arr[n-1]!=v[n-2]){
            flag=false;
            break;
        }
        else if(arr[i]!=v[i] && arr[i]!=v[i-1] && arr[i]!=v[i+1]){
            flag=false;
            break;
        }
   }
   cout<<flag;
}