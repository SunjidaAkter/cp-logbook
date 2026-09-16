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
    vector<ll>v;
    vector<ll>ans;
    for(ll i=0;i<s.size();i++){
        if(i<s.size()-3){
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                v.push_back(i+1);
                v.push_back(i+2);
                v.push_back(i+3);
            }
        }
    }
    if(s[s.size()-3]=='W'&&s[s.size()-2]=='U'&&s[s.size()-1]=='B'){
        v.push_back(s.size()-2);
        v.push_back(s.size()-1);
        v.push_back(s.size());    
    }
    ll i=1;
    for(ll j=0;j<v.size();j++,i++){
        while(v[j]!=i&&i<=s.size()){
            ans.push_back(i++);
        }
    }
    if(i<=s.size()&&i>v.size()){
        while(i<=s.size())ans.push_back(i++);
    }
    cout<<s[ans[0]-1];
    for(ll i=1;i<ans.size();i++){
        if(ans[i]-ans[i-1]>1)cout<<" "<<s[ans[i]-1];
        else cout<<s[ans[i]-1];
    }
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