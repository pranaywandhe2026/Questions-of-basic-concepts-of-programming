  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int n;
    cout<<"enter size of vector=";
    cin>>n;
    vector<int> v(n);
    int x;
    cout<<"x= ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>x) count++;
    }
    cout<<count;
    

  }