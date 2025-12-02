#include <bits/stdc++.h> 
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int e, f, c;
    cin >> e >> f >> c;

    int can = e+f, ans = 0;
    while(can >= c) {
        ans += can / c;
        can = (can / c) + can % c;
    }

    cout << ans;
    return 0;
}
