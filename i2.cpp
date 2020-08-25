#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    int c, ind, v;
    cin >> n >> q;
    vector<int> a[n];
    for ( int i = 0; i < q; i++ ) {
        cin >> c >> ind;
        switch (c) {
        case 0:
            cin >> v;
            a[ind].push_back(v);
            break;
        case 1:
            if ( a[ind].size() == 0 )
            {
                cout << endl;
                break;
            }
            for ( int j = 0; j < a[ind].size() - 1; j++ )
                cout << a[ind][j] << " ";
            cout << a[ind][a[ind].size() - 1] << endl;
            break;
        case 2:
            if ( a[ind].size() == 0 )
                break;
            else
                a[ind].clear();
            break;
        }
    }
    return 0;
}
