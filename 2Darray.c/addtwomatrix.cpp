#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           arr[i][j]=10;
        }
    }
    cout<<endl;
    int brr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           brr[i][j]=20;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           arr[i][j]+=brr[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}