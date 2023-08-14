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
    int j=n-1;
    int count=0;
    while(i<j){
        if(v[i]==v[j]){
            count++;
        }
        i++;
        j--;
    }
    if(count==(n/2)) cout<<"palindrome";
    else cout<<"not palindrome";
}