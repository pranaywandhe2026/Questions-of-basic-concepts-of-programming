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
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumEven+=v[i];
        }
        else sumOdd+=v[i];
    }
  
    if(sumEven>sumOdd) cout<<sumEven-sumOdd;
    else cout<<sumOdd-sumEven;
}