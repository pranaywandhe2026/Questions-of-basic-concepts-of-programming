#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(max>arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<max;

}