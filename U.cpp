#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    while (t--) {
        string str; cin >> str;
        int n = str.size(), sum = 0;
        for (int i = 1; i < n; i++) {
            if (str[i - 1] == str[i])
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
