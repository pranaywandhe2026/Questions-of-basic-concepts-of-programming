#include<bits/stdc++.h>
  using namespace std;
  void findlargest(vector<int> &v){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max1){
            max3=max2;
            max2=max1;
            max1=v[i];
        }
        else if(v[i]>max2 && max2!=max1){
            max2=v[i];
        }
        else if(v[i]>max3 && max3!=max2 && max3!=max1){
            max3=v[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
  }
  int main(){
    int n;
    cout<<"enter the size of array= ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    findlargest(v);
  }