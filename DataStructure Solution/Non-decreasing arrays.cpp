#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MAX_N = 2.5e5 + 14;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll last = 1;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            last = (last + a - 1) / a * a;
            cout << last << ' ';
        }
        cout << '\n';
    }
}
