#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int temp=0;
    int row;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(temp<sum){
            temp=sum;
            row=i;
        }
        
    }
    cout<<row;
    cout<<endl;
}