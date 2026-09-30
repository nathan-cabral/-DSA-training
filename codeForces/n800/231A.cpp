#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x;cin>>x;
    int r=0;
    while(x--){
        vector<int>a(3);
        for(int i=0;i<a.size();i++){
            cin>>a[i];
        }
        int q=count(a.begin(),a.end(),1);
        if(q>=2)r++;
    }
    cout<<r<<"\n";
    return 0;
}