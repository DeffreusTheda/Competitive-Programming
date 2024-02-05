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

    ll a[4], c=0;
    for(ll &i : a) cin>>i;
    for(int i=0; i<3; ++i) {
        for(int j=i+1; j<4; ++j) {
            if(a[i]==a[j]) {
                a[i] = -1;
                ++c;
            }
        }
    }
    cout<<c;

    return 0;
}
