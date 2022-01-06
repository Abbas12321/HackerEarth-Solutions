#include <bits/stdc++.h>
using namespace std;

#define F                       first
#define S                       second
typedef long long                ll;

void solve(){
    ll n;cin>>n;
    ll b;cin>>b;
    string str; cin>>str;
    deque<bool> dq;
    for(ll i=0;i<n;i++){
      if(str[i]=='1')dq.push_back(true);
      else dq.push_back(false);
    }
  
    str = "";
 
    set<deque<bool>> s;
    s.insert(dq);
    for(ll i=1;i<=n;i++){
       bool c = dq.front(); dq.pop_front();
       dq.push_back(c);
       s.insert(dq);
    }

  deque<bool> ans = *s.rbegin();
  s.clear();
  
  map<deque<bool>,vector<int>> mp;
  mp[dq].push_back(0);

  for(ll i=1;i<=n-1;i++){
      bool c = dq.front(); dq.pop_front();
      dq.push_back(c);
      mp[dq].push_back(i);
  }

  ll out = 0;
  vector<int> vec = mp[ans];
  ll cnt = vec.size();

  if(cnt>=b){ 
    cout << vec[b-1];
  }else{
    if(b%cnt==0){
      out  = (b/cnt - 1)*(n);
      b-=((b/cnt - 1)*(cnt)); 
    }else{
      out  = (b/cnt)*(n);
      b-=((b/cnt)*(cnt));
    }
    if(b>0){
     b--;
     out+=(vec[b]);
    }
     
    cout << out;
  }
  
  }


int main(){

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ; cout.tie(0) ;
    cout.precision(20);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int T=1; cin>>T;
    while(T--){
        solve();
        if(T)cout << endl;
    }
    return 0;
}
