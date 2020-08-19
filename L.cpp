#include <bits/stdc++.h>
using namespace std;
int o[105], z[105];
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, a, b;
    a = 0;
    b = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1')
            a++;
        if (str[i] == '0')
            b++;
        o[i] = a;
        z[i] = b;
    }
    int ans = 0;
    if (a != b) {
        cout << "1\n" << str << endl;
    }
    else {
        cout << "2\n";
        for (int i = 0; i < str.size() - 1; i++)
            cout << str[i];
        cout << " " << str[str.size() - 1] << endl;
    }
    return 0;
}
