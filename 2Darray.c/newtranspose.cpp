#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int t[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            t[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
