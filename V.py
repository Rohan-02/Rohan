l=int(input())
for i in range(l):
    a=input()
    sum=0
    for i in range(0,len(a)//2):
        sum=sum+abs(ord(a[i])-ord(a[-1-i]))
    print(sum)

    //cpp
//#include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t; cin >> t;
//     while (t--) {
//         string str; cin >> str;
//         int n = str.size(), sum = 0;
//         for (int i = 0; i < n / 2; i++) {
//             sum = sum + abs((int)(str[i] - str[n - i - 1]));
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
