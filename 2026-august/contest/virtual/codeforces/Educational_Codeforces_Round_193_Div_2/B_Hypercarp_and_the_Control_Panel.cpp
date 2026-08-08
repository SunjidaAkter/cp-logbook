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
    ll n;cin>>n;
    vector<ll>v(n);
    ll cnt=1;set<ll>st;
    for(ll i=0;i<n;i++){cin>>v[i];st.insert(v[i]);}
    vector<pii>freq;
    for(ll i=1;i<n;i++){
        if(v[i-1]!=v[i]){
            freq.push_back({cnt,v[i-1]});
            cnt=1;
        }else cnt++;
    }
    freq.push_back({cnt,v[n-1]});
    ll sum=0;
    if(freq.size()==1){
        cout<<1<<nl;
        return;
    }
    for(pii x:freq){
        sum+=(x.first-1);
    }
    for(ll i=1;i<freq.size();i++){
        if(freq[i-1].first>1&&freq[i].first>1){
            sum-=2;
            cout<<n-sum<<nl;
            return;
        }
    }
    for(ll i=1;i<freq.size()-1;i++){
        if(st.size()==2&&freq[i].first==1&&freq[i-1].second==freq[i+1].second){cout<<n-sum<<nl;return;}
        if((i-1==0||i+1==freq.size()-1)&&freq[i].first==1&&freq[i-1].second==freq[i+1].second)freq[i].second=0;
    }
    for(ll i=1;i<freq.size();i++){
        if(freq[i].first==1&&freq[i].second!=0){
            if(freq[i-1].first>1){
                if(i+1< freq.size() && freq[i+1].first>1 && freq[i-1].second==freq[i+1].second)i++;
            else{
                sum-=1;
                // cout<<" ch1 ";
                break;
            }
        }
    }else if(freq[i].first>1){
        if(freq[i-1].first==1&&freq[i-1].second!=0){
            sum-=1;
            // cout<<" ch2 ";
            break;
        }
    }
    }
    
    cout<<n-sum<<nl;
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