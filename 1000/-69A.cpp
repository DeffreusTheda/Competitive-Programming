#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define FOR(a,b) for (int i = a; i < b; ++i)

ll n, sx, sy, sz;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> n;
    FOR(0,n) {
        ll x, y, z;
        cin >> x >> y >> z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if (sx == 0 && sy == 0 && sz == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
