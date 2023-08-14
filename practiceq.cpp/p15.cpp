#include<bits/stdc++.h>
using namespace std;
// void sort(vector<int> &v){
//     int countofzeroes=0;
//     int coutofones=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) countofzeroes++;
//         else coutofones++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<countofzeroes) v[i]=0;
//         else v[i]=1;
//     }
// }
void sort2(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[i]==1) j--;
       else if(v[i]==1 && v[j]==0) {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }   
    sort2(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }   
}