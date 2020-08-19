#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;  cin >> str;
        int sol = 0;
        int x = -1, y = -1;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '1') {
                x = i;
                break;
            }
        }
        for (int j = str.length() - 1; j >= 0; j--) {
            if (str[j] == '1') {
                y = j;
                break;
            }
        }
        if (x == -1 || y == -1) cout << 0 << endl;
        else {
            for (int i = x; i <= y; i++) {
                if (str[i] == '0') sol++;
            }
            cout << sol << endl;
        }
    }
    return 0;
}
