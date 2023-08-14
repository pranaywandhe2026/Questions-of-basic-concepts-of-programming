#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int area=0;
    for(int i=0;i<=1;i++){
        for(int j=1;j<=1;j++){
            area+=arr[i][j];
        }
    }
    cout<<area;
}