#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5]={1,2,6,4,5};
    int index=-1;
    for(int i=0;i<4;i++){
         int min=INT_MAX;
        for(int j=i;j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    // vector<int> v(5,0);
    // for(int i=0;i<5;i++){
    //     if(v[arr[i]]==0) v[arr[i]]=1;
    //     else{
    //         cout<<arr[i];
    //     }
    // }
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     if(v[i]==v[i+1]){
    //         cout<<v[i]<<" ";
    //     }
    // }
}