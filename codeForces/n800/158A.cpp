#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    int nk=v[k-1];
    for(int i=0;i<n;i++){
        if(v[i]>=nk && v[i]>0)sum++;
    }
    cout<<sum<<"\n";
    
    return 0;
}