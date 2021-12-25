#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {

    // this is for decreasing time 
    // three lines use only for decrease time 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    long long int N,K;
    cin >> T;   
    while(T--){
        cin >> N >> K;
        long long int i, temp, sum=0;
        for(i=0; i<N; i++){
            cin >> temp;
            sum+=temp;
        }
        long long int floor;
        floor = sum/N;
        if(floor <= K)
            cout << 0 << endl;
        else{
            long long int R = 1e18,extra,L=N,mid;
            while(L<=R){
                mid = (L+R)/2;
                floor = sum/mid;
                if(floor <= K){
                    extra = mid;
                    R = mid-1;
                }
                else{   
                    L = mid+1;
                }
            }
            cout << extra-N << endl;
        }
    }
}
