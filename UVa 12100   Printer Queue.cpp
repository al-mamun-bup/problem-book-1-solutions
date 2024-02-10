/**
* Problem : UVa 12100   Printer Queue
* Author  : Abdullah Al Mamun
* From    : BUP(CSE)
**/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0);
#define ll long long
#define nl "\n"
#define db double
#define pb push_back
#define F first
#define S second
#define precision(x) cout.setf(ios::fixed); cout.precision(x);
#define all(v) v.begin(),v.end()
#define inf LLONG_MAX
using namespace std;
int main(){
    fast;
    ll tt;
    cin >> tt;
    while(tt--){
        ll n,m;
        cin >> n >> m;
        priority_queue<ll>pq;
        queue<pair<ll,ll>>q;
        for(ll i = 0 ; i < n ; i++){
            ll x;
            cin >> x;
            q.push({x,i});
            pq.push(x);
        }
        ll ans = 0;
        while(!q.empty()){
            ll u = q.front().F;
            ll pos = q.front().S;
            q.pop();
            if(u == pq.top()){
                ans++;
                if(pos == m) break;
                pq.pop();
            }else{
                q.push({u,pos});
            }
        }
        cout << ans << nl;
    }
    return 0;
}
