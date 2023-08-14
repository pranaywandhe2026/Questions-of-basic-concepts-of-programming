#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //        if(i%2!=0){
    //         cout<<a[j][i]<<" ";
    //        }
    //        else{
    //         cout<<a[i][j]<<" ";
    //        }
    //     }
       
    // }
    int a[2][2]={1,2,3,4};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(j>i){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i==0){
                swap(a[i][j],a[i+1][j]);
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}