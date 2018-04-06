#include <iostream>

using namespace std;

int main ()
{
	string in;
	long long DP[10010];

	while (cin >> in)
	{
		if (in=="0")
			break;


		DP[0] = 1;
		DP[1] = 1;

		for (int i=2 ;i<=in.length() ;i++)
		{
			DP[i] = 0;

			if (in[i-1]!='0')
				DP[i] += DP[i-1];

			int tmp = (in[i-2]-'0')*10+in[i-1]-'0';


			if (tmp>=10 and tmp<=26)
				DP[i] += DP[i-2];
		}


		cout << DP[in.length()] << endl;
	}

	return 0;
}
