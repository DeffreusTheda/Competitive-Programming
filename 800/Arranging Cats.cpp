#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PB push_back
#define POP pop_back
#define IN(a) insert(a)
#define ER(a) erase(a)
#define CNT(a) count(a)
#define MP make_pair
#define UF uint_fast64_t
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) ((a)*(a))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<vi> vvi;
typedef deque<ll> di;
typedef set<ll> si;
typedef set<string> ss;
typedef map<string, ll> msi;
typedef bitset<10> bit;

// sort(vi.begin(), vi.end())
// reverse(vi.begin(), vi.end())

ll t, n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  FOR(T,0,t) {
    ll add = 0, rm = 0;
    string s, f;
    cin >> n >> s >> f;
    FOR(N,0,n) {
      if (s[N] != f[N]) {
        if (s[N] == '0') {
          ++add;
        } else {
          ++rm;
        }
      }
    }
    cout << max(add, rm) << "\n";
  }

  return 0;
}