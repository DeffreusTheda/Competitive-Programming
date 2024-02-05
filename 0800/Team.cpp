#include <iostream>

short N;

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::cin >> N;
    int res = 0;
    for(int i = 0; i < N; i++) {
        int count =0 ;
        for(int j = 0;   j < 3; j++) {
            int y;
            std::cin >> y;
            if(y==1) count++;
        }
        if(count >=2) res++;
    }
    std::cout<< res;

    return 0;
}
