#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,10,10,7,8,9};
    int temp=0;
    int row=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(temp<sum){
            temp=sum;
            row=i+1;
        }
    }
    cout<<row;
}