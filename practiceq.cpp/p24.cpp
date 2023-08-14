#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> &v){
    int n=v.size();
    int i=0;
   int j=1;
   while(i<n-1 && j<n){
   
    if(v[i]>v[j]){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    j++;
    if(j==n-1){
        i++;
        j=i+1;
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
// while(i<n){
//          int j=i+1;
//         while(j<n){
//             if(v[i]>v[j]){
//                 int temp=v[i];
//                 v[i]=v[j];
//                 v[j]=temp;
//             }
//             j++;
//         }
//         i++;
//     }