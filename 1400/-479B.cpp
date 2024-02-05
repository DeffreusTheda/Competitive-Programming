/***********************************************************************************************************************
As you know, all the kids in Berland love playing with cubes. Little Petya has n towers consisting of cubes of the same
 size. Tower with number i consists of ai cubes stacked one on top of the other. Petya defines the instability of a set
 of towers as a value equal to the difference between the heights of the highest and the lowest of the towers. For
 example, if Petya built five cube towers with heights (8, 3, 2, 6, 3), the instability of this set is equal to 6 (the
 highest tower has height 8, the lowest one has height 2).

The boy wants the instability of his set of towers to be as low as possible. All he can do is to perform the following
 operation several times: take the top cube from some tower and put it on top of some other tower of his set. Please
 note that Petya would never put the cube on the same tower from which it was removed because he thinks it's a waste of
 time.

Before going to school, the boy will have time to perform no more than k such operations. Petya does not want to be late
 for class, so you have to help him accomplish this task.

Input
The first line contains two space-separated positive integers n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 1000) — the number of towers
 in the given set and the maximum number of operations Petya can perform. The second line contains n space-separated
 positive integers ai (1 ≤ ai ≤ 104) — the towers' initial heights.

Output
In the first line print two space-separated non-negative integers s and m (m ≤ k). The first number is the value of the
 minimum possible instability that can be obtained after performing at most k operations, the second number is the
 number of operations needed for that.

In the next m lines print the description of each operation as two positive integers i and j, each of them lies within
 limits from 1 to n. They represent that Petya took the top cube from the i-th tower and put in on the j-th one (i ≠ j).
 Note that in the process of performing operations the heights of some towers can become equal to zero.

If there are multiple correct sequences at which the minimum possible instability is achieved, you are allowed to print
 any of them.
***********************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define EACH(e,a) for (auto e : a)
#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define BR break;

ll n, k, H, L = 99999, h, l, K;
string s;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    cin >> n >> k;
    ll ar[n];
    FOR(i,0,n) {
        cin >> ar[i];
        if (H < ar[i]) {
            H = ar[i];
            h = i;
        }
        if (L > ar[i]) {
            L = ar[i];
            l = i;
        }
    }
    while (ar[h]-1 + ar[l]+1 != ar[h]+ar[l] && K < k) {
        s.append(to_string(h)+" "+ to_string(l)+"\n");
        ar[h]-=1;
        ar[l]+=1;
        EACH(i,ar) {
            if (H < ar[i]) {
                H = ar[i];
                h = i;
            }
            if (L > ar[i]) {
                L = ar[i];
                l = i;
            }
        }
        ++K;
    }
    cout << s << H-L << K;

    return 0;
}
