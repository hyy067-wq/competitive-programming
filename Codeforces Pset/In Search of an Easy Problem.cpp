#include<iostream>
using namespace std;

int main()
{
	int n,a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		if(a==1)
		{
			cout << "HARD" << endl;
			return 0;
		}
	}
	cout << "EASY" << endl;

	return 0;
}