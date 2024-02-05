#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define FOR(a,b) for (int i = a; a < b; ++a)

ll n, m, a, cnt;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> n >> m >> a;
    ll r = n % a == 0 ? n/a : n/a+1, c = m % a == 0 ? m/a : m/a+1;
    for (ll i = 0; i < r; ++i) {
        for (ll j = 0; j < c; ++j) {
            ++cnt;
        }
    }
    cout << cnt;

    return 0;
}
