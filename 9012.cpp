#include <bits/stdc++.h> 
using namespace std;

bool f(string s);

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--) {
        string s;
        cin >> s;
        cout << (f(s) ? "YES\n" : "NO\n");
    }

    return 0;
}

bool f(string s)
{
    stack<char> st;

    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return false;
            }

            st.pop();
        }
    }

    if(st.empty()) {
        return true;
    }
    return false;
}
