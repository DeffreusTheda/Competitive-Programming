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
#define EACH(x,a) for (auto x : a)
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

ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N;
  unordered_map<ll, ll> freq;
  FOR(n,0,N) {
    ll tmp;
    cin >> tmp;
    freq[tmp] = freq[tmp] + 1;
  }
  cin >> D;
  FOR(d,0,D) {
    ll coins; cin >> coins;
    ll cnt = 0;
    EACH(x,freq) {
      if (x.first <= coins) {
        cnt += x.second;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}