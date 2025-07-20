#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s1, s2;
	int t, n;
	bool ident;
	cin >> t;
	while (t--)
	{
		ident = true;

		for (int i = 0;i < n;i++)
		{
			if (s1[i] != s2[i] || s1[i] + s2[i] != 'G' + 'B')
			{
				ident = false;
				break;
			}

		}

		if (ident)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}