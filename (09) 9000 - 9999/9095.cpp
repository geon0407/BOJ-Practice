#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(void){
    int t, i;
    scanf("%d", &t);

    while (t--){
        int DP[15] = {};
        int n;

        DP[0] = 1;
        scanf("%d", &n);

        for (i=1;i<=n;i++){
            if (i - 1 >= 0)
                DP[i] += DP[i - 1];
            if (i - 2 >= 0)
                DP[i] += DP[i - 2];
            if (i - 3 >= 0)
                DP[i] += DP[i - 3];
        }

        printf("%d\n", DP[n]);

    }
    return 0;
}
