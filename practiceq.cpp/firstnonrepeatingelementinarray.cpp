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
    
    while(i<n && j<n){
        int x;
        if(v[i]==v[j]){
            i++;
            j=i+1;
        }
        j++;


       if(j==n){
            int temp=v[i];
            cout<<temp<<" ";
           break;
        }


    }
    
}