#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define int ll
using pii=pair<int,int>;

void solve();
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
}

void solve(){
    int a,b;
    cin>>a>>b;
    if(a<b)swap(a,b);
    if(!(b&1)){
        cout<<"Yes\n";return;
    }else if(!(a&1)&&a/2!=b){
        cout<<"Yes\n";return;
    }
    cout<<"No\n";
}