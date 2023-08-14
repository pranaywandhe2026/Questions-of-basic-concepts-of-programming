#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n= ";
    cin>>n;
    int a[n][n];
    int fill=1;
    
    int row=0;
    int col=0;
    while(fill<(n*n)){
        while(col<n){
            a[row][col]=fill++;
           col++;
        }
       
        col=row+1;
        while(row<n){

            a[row++][col+1]=fill++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}