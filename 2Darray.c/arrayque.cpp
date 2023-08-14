#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    int i=0;
    int j=1;
    while(i<3 && j<3){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
}