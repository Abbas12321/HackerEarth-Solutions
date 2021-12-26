#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
	int n; cin >> n;
    int ans=1;
    int a; cin >> a;
    for(int i=1;i<n;i++){
        int b; cin >> b;
        if(a!=b)
        ans++,a=b;
    }
    cout << ans ;

}
