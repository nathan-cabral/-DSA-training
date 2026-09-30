#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    int x;cin>>x;
    while(x--){
        string s;cin>>s;
        if(s[1]=='+')sum++;
        else sum--;
    }
    cout<<sum<<"\n";
    return 0;
}