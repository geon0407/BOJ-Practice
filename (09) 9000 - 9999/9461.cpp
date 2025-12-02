#include <bits/stdc++.h> 
using namespace std;

long long dp[110] = {0, 1, 1, 1, 2, 2, };

int main(void)
{
    int i;
    for(i=6;i<=100;i++) {
        dp[i] = dp[i-1] + dp[i-5];
    }

    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int in;
        scanf("%d", &in);
        printf("%lld\n", dp[in]);
    }
    return 0;
}
