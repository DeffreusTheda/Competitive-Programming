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
    bool b[n];
    for(bool &x : b) x = false;
    for(int x=0; x<2; ++x) {
        ll f;
        cin>>f;
        for(int i=0; i<f; ++i) {
            int tmp;
            cin>>tmp;
            b[tmp-1] = true;
        }
    }
    for(bool x : b) {
        if(!x) {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}
