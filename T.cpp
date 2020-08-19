#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int j = str.length()-1;
        bool t = true;
        for(int i = 1; i < str.length(); i++,j--)
        {

            if(abs(str[i]-str[i-1]) != abs(str[j]-str[j-1]))
            {
                t = false;
                break;
            }
        }
        if(t)
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}
