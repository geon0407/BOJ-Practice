#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calc(int len);

char arr[90];

int main(void)
{
    int t, i;
    scanf("%d", &t);

    for(i=0;i<t;i++) {
        scanf("%s", arr);
        calc(strlen(arr));
    }

    return 0;
}

void calc(int len)
{
    int i, cnt=0, ans=0;
    for(i=0;i<len;i++) {
        if(arr[i] == 'X') {
            cnt = 0;
        }
        if(arr[i] == 'O') {
            cnt++;
            ans += cnt;
        }
    }
    printf("%d\n", ans);
    return ;
}
