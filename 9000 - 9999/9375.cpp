#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) {
        map<string, int> data;
        int n;

        cin >> n;
        for(int i=0;i<n;i++) {
            string s1, s2;
            cin >> s2 >> s2;
            data[s2]++;
        }

        int ans = 1;
        for(auto i : data) {
            ans *= (i.second+1);
        }

        cout << ans-1 << "\n";
    }

    return 0;
}
