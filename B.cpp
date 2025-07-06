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

int n;

void solve(){
    cin>>n;
    set<int>st;
    for(int i=0,a;i<n;i++)cin>>a,st.insert(a);
    queue<int>q;
    int ans=0;
    for(int x:st){
        while(!q.empty()&&q.front()<=x-n)q.pop();
        q.push(x);
        ans=max<ll>(ans,q.size());
    }
    cout<<ans<<"\n";
}