#include <iostream>
#include <vector>

short N;

int main() {
    /*std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);*/

    std::uint_fast8_t n, c=0;
    std::string s;
    scanf("%hhu\n", &n);
    std::cin>>s;
    for(std::size_t i=0; i<n-1; ++i)
        if(s[i]==s[i+1])
            ++c;
    printf("%hhu", c);

    return 0;
}
