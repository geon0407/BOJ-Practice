#include <bits/stdc++.h>
using namespace std;

int mod[42];

int main(void)
{
    int ans=0;
    for(int i=0;i<10;i++) {
        int in;
        scanf("%d", &in);
        if(mod[in%42]++ == 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
