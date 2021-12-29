    #include<bits/stdc++.h>

    using namespace std;

    typedef long long int ll;

    int main(){

    int t;

    cin>>t;

    while(t--){

    unordered_map<ll,ll> ump;

    ll n,q,ans=0;

    cin>>n>>q;

    vector<ll> arr(n);

    for(ll i=0;i<n;i++){

    cin>>arr[i];

    ump[arr[i]]++;

    ump[arr[i]]==1?ans++:ans;

    }

    while(q--){

    ll idx,val;

    cin>>idx>>val;

    ump[arr[idx-1]]--;

    ump[arr[idx-1]]==0?ans--,ump.erase(arr[idx-1]):ans;

    arr[idx-1]=val;

    ump[val]++;

    ump[val]==1?ans++:ans;

    cout << ans+1 << endl;

    }

    }

    }
