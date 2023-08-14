#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,5,1,4,2};
        for(int i=0;i<4;i++){
            bool flag=true;
            for(int j=0;j<5-1-i;j++){
                if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag=false;
                }
            }
            if(flag==true) break;
        }


        // for(int i=1;i<5;i++){
        //     int j=i;
        //     while(j>=1 && arr[j-1]>arr[j]){
        //         swap(arr[j],arr[j-1]);
        //         j--;
        //     }
           
        // }
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
}