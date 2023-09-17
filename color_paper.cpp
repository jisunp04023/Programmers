#include <string>
#include <iostream>
#include <vector>


using namespace std;

vector<vector<int>> solution(int n, int m, vector<int> fold, vector<vector<int>> cut) {

	for (int i = 0; i < fold.size(); ++i) {
		if (fold[i] == -1) {
			n /= 2;
		}
		if (fold[i] == 1) {
			m /= 2;
		}
	}

	vector<vector<int>> v(n, vector<int>(m, 1));

	for (int i = 0; i < cut.size(); ++i) {
		int a = cut[i][0] - 1;
		int b = cut[i][1] - 1;

		if (a < n and b < m) {
			v[a][b] = 0;
		}
	}

	for (int i = 0; i < fold.size(); ++i) {
		if (fold[i] == -1) {
			for (int k = n - 1; k > -1; --k) {
				v.push_back(v[k]);
			}
			n *= 2;
		}
		if (fold[i] == 1) {
			for (int k = 0; k < n; ++k) {
				for (int l = m - 1; l > -1; --l) {
					v[k].push_back(v[k][l]);
				}
			}
			m *= 2;
		}
	}

	return v;

}
