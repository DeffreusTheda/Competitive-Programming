#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PB push_back
#define POP pop_back
#define IN(a) insert(a)
#define ER(a) erase(a)
#define CNT(a) count(a)
#define MP make_pair
#define uf uint_fast64_t
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define SQ(a) ((a)*(a))
#define f int_fast64_t
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)

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

ll T;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> T;
  FOR(t,0,T) {
    ll hx = LONG_LONG_MIN, lx = LONG_LONG_MAX,
    hy = LONG_LONG_MIN, ly = LONG_LONG_MAX;
    FOR(i,0,4) {
      ll tmp1, tmp2;
      cin >> tmp1 >> tmp2;
      MAX(hx, tmp1);
      MIN(lx, tmp1);
      MAX(hy, tmp2);
      MIN(ly, tmp2);
    }
    cout << (hx-lx) * (hy-ly) << "\n";
  }

  return 0;
}