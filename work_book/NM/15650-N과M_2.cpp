#include <iostream>
#include <vector>

using namespace std;

// 15650 - N과 M (2)
int N, M;
void solve(vector<int> seq, int idx) {
	if (seq.size() == M) {
		for (int i = 0; i < seq.size(); ++i) {
			cout << seq[i] << " ";
		}
		cout << "\n";
		return 0;
	}

	for (int next = idx + 1; next <= N; ++next) {
		seq.push_back(next);
		solve(seq, next);
		seq.pop_back();
	} 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	vector<int> _seq;
	solve(_seq, 0);

	return 0;
}
