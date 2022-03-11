#include <bits/stdc++.h>
using namespace std;

string s;
int p, ans;
int recursion(int p, int num, int count)
{
	if (p==1) return 1;
	int front=(num-1)+p, back=num, dest;
	if (count>s.length()-1)
		dest=recursion(p/2, front+1, count-1);
	else
		dest=recursion(p/2, front+1, count-1)*2-(s[count]=='R');
	if (s[count+1]=='\0'&&ans==0)
		ans=(back+dest)-1;
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
