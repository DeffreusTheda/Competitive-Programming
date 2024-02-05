#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    ll n, hi=0, lo=100, hp=0;
    cin>>n;
    ll ar[n], lp=n-1, c=0;
    for(ll i=0; i<n; ++i) {
        cin>>ar[i];
        hi = max(hi, ar[i]);
        lo = min(lo, ar[i]);
    }
    for(; lp>=0; --lp) if(ar[lp]==lo) break;
    for(; lp<=n-2; lp++) {
        swap(ar[lp], ar[lp+1]);
        ++c;
    }
    for(; hp<n; ++hp) if(ar[hp]==hi) break;
    for(; hp>=1; --hp) {
        swap(ar[hp], ar[hp-1]);
        ++c;
    }
    cout<<c;

    return 0;
}