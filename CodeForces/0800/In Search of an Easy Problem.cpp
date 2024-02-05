#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int s;
    // cin>>s;
    // for(size_t i=0; i<s; ++i) {
    //     int ss;
    //     cin>> ss;
    //     if(ss==1) {
    //         cout<<"HARD";
    //         return 0;
    //     }
    // }
    // cout<<"EASY";

    double time = 7451, cur = 0, del = 5.3, inc=3.5, counter = 0;
    cur = 47.9;
    while (cur < time) {
        inc+=0.3;
        del+=inc;
        for (int i = 0; i < 4; ++i) {
            cur += 8 + del;
        }
        ++counter;
    }
    cout << counter;

    return 0;
}
