#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    string s;cin>>s;
    ll cnt=0;
    ll z=0,o=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0')z++;
        if(s[i]=='1')o++;
    }
    while(s.size()>0){
        for(ll i=1;i<s.size();i++){
            if(s[i-1]!=s[i]){
                s.erase(i-1, 2);
                cnt++;
                o--,z--;
                break;  
            }
        }
        if(z==0||o==0)break;
    }
    if(cnt%2)cout<<"DA"<<nl;
    else cout<<"NET"<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}