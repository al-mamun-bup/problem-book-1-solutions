#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll kase = 1;
    while(1){
        ll n,q;
        cin >> n >> q;
        if(n==0 and q==0) break;
        vector<ll>v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];   
        }
        sort(v.begin(),v.end());
        cout << "CASE# " << kase << ":" << nl;
        while(q--){
            ll x;
            cin >> x;
            ll ans = lower_bound(v.begin(),v.end(),x) - v.begin();
            if(ans == n){
                cout << x << " not found" << nl;
            }else if(v[ans] != x){
                cout << x << " not found" << nl;
            }else{
                cout << x << " found at " << ans + 1 << nl; 
            }
        }
        kase++;
    }
    return 0;
}
