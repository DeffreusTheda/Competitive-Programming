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

    ll n, c=0;
    cin>>n;
    for(int i=1; i<=n; ++i) {
        c=0;
        ll a, b;
        cin>>a>>b;
        if(a%b==0) cout<<c;
        else cout<<b*(a/b+1)-a;
        if(i!=n) cout<<"\n";
    }

    return 0;
}
