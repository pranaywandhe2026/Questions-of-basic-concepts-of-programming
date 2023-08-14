#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n= ";
    cin>>n;

    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    cout<<product<<endl;;
    
    int count=0;
    int arr[count];
    while(product>0){
        int digit=product%10;
        product=product/10;
        count++;
        arr[count]=digit;
    }
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
   
}