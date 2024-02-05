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

ll n, t;
string a, b, c;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  FOR(T,0,t) {
    cin >> n >> a >> b >> c;
    bool exist = false;
    FOR(N,0,n) {
      if (a[N] != c[N] && b[N] != c[N]) {
        exist = true;
        break;
      }
    }
    if (exist) {
      cout  << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}