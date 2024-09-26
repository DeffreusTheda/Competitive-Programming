#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pf push_front
#define ob pop_back
#define of pop_front
#define in insert

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n; cin >> n;
  while (n != 1) {
    cout << n << " ";
    if (n & 1) {
      n = n * 3 + 1;
      continue;
    }
    n /= 2;
  }
  cout << 1;
  
  return 0;
}
