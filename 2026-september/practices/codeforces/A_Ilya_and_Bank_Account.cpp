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
    if(s[0]!='-'){
        cout<<s<<nl;
        return;
    }
    if(s[s.size()-2]-'0'>s[s.size()-1]-'0'){
        swap(s[s.size()-1],s[s.size()-2]);
    }
    s.pop_back();
    for(ll i=1;i<s.size();i++){
        if(s[i]!='0'){
            cout<<s<<nl;
            return;
        }
    }
    cout<<0<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}