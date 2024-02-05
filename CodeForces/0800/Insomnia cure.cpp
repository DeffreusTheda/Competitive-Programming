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

    ll k, l, m, n, d, count=0;
    cin>>k>>l>>m>>n>>d;
    for(ll i=1; i<=d; ++i) {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0) ++count;
    }
    cout<<count;

    return 0;
}