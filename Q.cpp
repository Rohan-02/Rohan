#include<bits/stdc++.h>
using namespace std;
int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int strA[26], strB[26], i;
    for (i = 0 ; i < 26 ; i++)
        strA[i] = strB[i] = 0;
    for (i = 0 ; i < str1.length() ; i++)
        strA[(int)(str1[i] - 'a')]++;
    for (i = 0 ; i < str2.length() ; i++)
        strB[(int)(str2[i] - 'a')]++;
    int sol = 0;
    for (i = 0 ; i < 26 ; i++) {
        sol = sol +  strA[i] +  strB[i] - 2 * min( strA[i],  strB[i]);
    }
    cout << sol;
    return 0;
}
