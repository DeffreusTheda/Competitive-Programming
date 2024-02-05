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

    string s, ss;
    cin>>s>>ss;
    string res = s;
    for(ll i = 0; i<s.length(); ++i) {
        if(s[i]!=ss[i]) res[i] = '1';
        else res[i] = '0';
    }
    cout<<res;

    return 0;
}
