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

    int i=0;
    int j=1;
    int k=2;
    int x;
    cout<<"x= ";
    cin>>x;
    int count=0;
    while(i<n && k<n && j<n){
        if((v[i]+v[j]+v[k])==x){
            cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
            count++;
        }
        k++;
        if(k==n){
            j++;
            k=j+1;
           
        }
        else if(j==n){
            i++;
            j=i+1;
            k=j+1;
        }
    }
}