#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   int i = 0, a[26]={0},j;
   while(str[i]!='\0')
   {
      if (str[i]>='a'&&str[i]<='z')
      {
         j = str[i] - 'a';
         ++a[j];
      }
      ++i;
   }
   for (i=0;i<26;i++)
   cout<<char(i + 'a')<<" : "<< a[i]<< endl;
   return 0;
}
