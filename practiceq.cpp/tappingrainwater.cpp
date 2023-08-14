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
    int i=1;
    int j=0;
    int max=-1;
    while(i<n && j>=0){
        if(max<v[j]){
            max=v[j];
            v[i-1]=max;

        }
        if(i==n-1){
            v[i]=max;
        }
        j--;
        if(j<0){
            i++;
            j=i-1;
            max=-1;
        }
    }
    // int i=0;
    // int j=1;
    // int max=-1;
    // while(i<n && j<n){
    //     if(max<v[j]){
    //         max=v[j];
    //         v[i]=max;
    //     }
    //     j++;
    //     if(j==n){
    //         i++;
    //         j=i+1;
    //         max=-1;
    //     }
    // }
    // int i=0;
    // int j=1;
    // while(i<n && j<n){
    //     if(v[i]<v[j]){
    //         v[i]=v[j];
    //     }
    //     j++;
    //     if(j==n){
    //         i++;
    //         j=i+1;
    //     }
    // }
//    int i=0;
//    int j=1;
//    while(i<n && j<n){
//     if(v[j]<v[i]){
//        int temp=v[i];
//        v[i]=v[j];
//         v[j]=temp;
//     }
//     j++;
//     if(j==n){
//         i++;
//         j=i+1;
//     }
//    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}