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
    cin>>n;
    string s = "I hate";
    for(int i=1; i<=n; ++i) {
        if(i==n) s.append(" it");
        else if(i%2!=0) s.append(" that I love");
        else s.append(" that I hate");
    }
    cout<<s;

    return 0;
}
