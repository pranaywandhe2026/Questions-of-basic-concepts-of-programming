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
    int previous;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if( (v[i]==v[j])){
                count++;
                previous=v[i];
            }
        }
        
        if(count==0 && v[i]!=previous){
            cout<<v[i];
            break;
        }
        } 
}
   