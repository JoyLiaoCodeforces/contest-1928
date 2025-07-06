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

int calc(int n,int x){
    int i=1,ret=0;
    for(;i*i<n;i++)if(n%i==0){
        if(i>=x)ret++;
        if(n/i>x)ret++;
    }
    if(i*i==n&&i>=x)ret++;
    return ret;
}

void solve(){
    int n,x;
    cin>>n>>x;
    if((n+x)&1){
        cout<<"0\n";return;
    }
    if(x==1){
        cout<<calc((n+x-2)/2,x)<<"\n";
        return;
    }
    int ans=calc((n-x)/2,x-1)+calc((n+x-2)/2,x);
    cout<<ans<<"\n";
}