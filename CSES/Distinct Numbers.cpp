#include <iostream>
#include <set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  long long n; cin >> n;
  set<long long> unique_numbers;

  while (n--) {
    long long c; cin >> c;
    unique_numbers.insert(c);
  }

  cout << unique_numbers.size();

  return 0;
}