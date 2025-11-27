#include <bits/stdc++.h> 
using namespace std;

int l[3];

int main(void)
{
    while( 1 ) {
        scanf("%d%d%d", &l[0], &l[1], &l[2]);
        sort(l, l+3);
        if(l[2] == 0) {
            exit(0);
        }
        if(l[2]*l[2] == (l[0]*l[0] + l[1]*l[1])) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }
    return 0;
}
