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

int func(bool pernah[], int point, int arr[]) {
  if (!pernah[point]) {
    pernah[point] = true;
    return func(pernah, arr[point]-1, arr);
  } else {
    return point;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> N;
  int arr[N];
  FOR(i,0,N) {
    cin >> arr[i];
  }
  FOR(n,0,N) {
    bool pernah[N];
    pernah[n] = true;
    cout << 1+func(pernah, arr[n]-1, arr) << " ";
  }

  return 0;
}