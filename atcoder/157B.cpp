#include<iostream>
using namespace std;
int main()
{
	int N, A[3][3], b[10];
	bool appear[3][3];
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) cin >> A[i][j];
	}
	cin >> N;
	for(int i=0;i<N;i++) cin >> b[i];
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			appear[i][j] = false;
			for(int k=0;k<N;k++) {
				if(A[i][j] == b[k]) appear[i][j] = true;
			}
		}
	}
	string ANS = "No";
	for(int i=0;i<3;i++) {
		if(appear[i][0] and appear[i][1] and appear[i][2]) ANS = "Yes";
	}
	for(int i=0;i<3;i++) {
		if(appear[0][i] and appear[1][i] and appear[2][i]) ANS = "Yes";
	}
	if(appear[0][0] and appear[1][1] and appear[2][2]) ANS = "Yes";
	if(appear[0][2] and appear[1][1] and appear[2][0]) ANS = "Yes";
	cout << ANS << endl;
	return 0;
}

