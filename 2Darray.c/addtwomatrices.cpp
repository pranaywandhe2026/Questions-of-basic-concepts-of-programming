#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    int brr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}