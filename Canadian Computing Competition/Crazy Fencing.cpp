#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define FF first
#define SS second
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
#define double long double

typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<vi> vvi;
typedef deque<ll> di;
typedef set<ll> si;
typedef set<string> ss;
typedef map<string, ll> msi;

// sort(vi.begin(), vi.end())
// reverse(vi.begin(), vi.end())

ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;

void solve() {
  vector<pair<double, double> > heights;
  cin >> N >> R;
  FOR(n,0,N) {
    L = R;
    cin >> R;
    heights.PB(make_pair(L, R));
  }
  double sum = 0.0f;
  FOR(n,0,N) {
    double width;
    cin >> width;
    sum += (0.5 * width * abs(heights[n].first - heights[n].second))
            + width * min(heights[n].first, heights[n].second);
  }
  string res = to_string(sum);
  for (int i = res.length()-1; i >= 0; --i) {
    if (res[i] == '0' || res[i] == '.') {
      res.erase(i);
    } else {
      break;
    }
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
//  clock_t startTime = clock();

  T = 1;
//  cin >> T;
  FOR(t,0,T) {
    solve();
  }

//  clock_t endTime = clock(); cout << endl << "Run Time : " << endTime - startTime << endl;
  return 0;
}