#include <vector>
#include <climits>
#include <iostream>
#include <unordered_map>
using namespace std;

#define ll int64_t

int main() {
    string str;   cin >> str;
    ll sum = 0, min_sum = LLONG_MAX;
    unordered_map<ll, ll> hash_map;
    for(const char &c: str) {
        sum += (c == '(') ? 1 : -1;
        hash_map[sum]++;
        min_sum = min(min_sum, sum);
    }
    cout << (sum == 0) * hash_map[min_sum] << "\n";
}
