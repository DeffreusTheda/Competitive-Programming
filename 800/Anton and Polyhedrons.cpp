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

    ll n, count=0;
    cin>>n;
    for(int i=0; i<n; ++i) {
        string s;
        cin>>s;
        if(s=="Tetrahedron") count+=4;
        else if(s=="Cube") count+=6;
        else if(s=="Octahedron") count+=8;
        else if(s=="Dodecahedron") count+=12;
        else if(s=="Icosahedron") count+=20;
    }
    cout<<count;

    return 0;
}