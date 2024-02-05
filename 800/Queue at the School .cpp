#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); /*std::cin.tie(nullptr);*/ std::cout.tie(nullptr);

    int n, t;
    string s;
    cin>>n>>t>>s;
    string tmp = s;
    for(int i = 0; i< t; ++i) {
        for(int j = 0; j < n-1; ++j) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                tmp[j] = 'G';
                tmp[j+1] = 'B';
            }
        }
        s = tmp;
    }
    cout<<tmp;

    return 0;
}
