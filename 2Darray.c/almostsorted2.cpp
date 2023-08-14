#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,10,9,8};
    int n=5;
    bool flag=true;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]<arr[j]) count++;
        }
        int aidx=n-count-1;
        int diff=aidx-i;
        if(diff<0) diff=-diff;
        if(diff>1) {
            flag=false;
            break;
        }
    }
    cout<<flag;
}