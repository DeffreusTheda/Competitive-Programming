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

    ll n, count=0, now;
    cin>>n;
    count += n/100; now = n%100;
    count += now/20; now = n%20;
    count += now/10; now = n%10;
    count += now/5; now = n%5;
    count += now/1;
    cout<<count;

    return 0;
}