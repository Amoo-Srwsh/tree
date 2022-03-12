#include <bits/stdc++.h>
using namespace std;

string s;
int p, ans;
int recursion(int p, int num, int count)
{
        if (p==1) return 1;
        int dest=dest=recursion(p/2, num+p, count-1)*2-(s[count]=='R');
        if (s[count+1]=='\0'&&ans==0)
                ans=(num+dest)-1;
        else
                return dest;
        return -1;
}
int main()
{
        cin >> p >> s;
        recursion(pow(2, p), 1, p-1);
        cout << ans;
}
