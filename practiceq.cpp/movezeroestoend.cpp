#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n= ";
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) count++;
    }
    int i=0;
    int j=0;
    while(j<n ){
        if(v[j]!=0){
            swap(v[i],v[j]);
            i++;
        }
        j++;
    }
    // int i=0;
    // int j=n-1;
    //  while(i<j){
    //     if(v[i]==0 && v[j]!=0){
    //         swap(v[i],v[j]);
    //         i++;
    //         j--;
    //     }
    //     else if(v[j]==0){
    //         j--;
    //     }
    //     else if(v[i]!=0){
    //         i++;
    //     }
        
    //  }

     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}