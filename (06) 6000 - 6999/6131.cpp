#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, ans = 0;
    cin >> n;

    for(int b=1;b<=500;b++) {
        for(int a=b;a<=500;a++) {
            if(a*a - b*b == n) {
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}
