#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    ll n;
    string s;
    cin>>n>>s;
    bool b[26];
    for (bool &tmp : b) tmp = false;
    for (char &x : s) {
        b[tolower(x)-97] = true;
    }
    for (bool &tmp : b) if(!tmp) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}