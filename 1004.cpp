#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

#define NODES 105
vector<int> v[NODES];
int res[NODES], maxdepth = -1;

void dfs(int index, int depth) {
	if(v[index].size() == 0) {
		res[depth]++;
		maxdepth = max(maxdepth, depth);
		return;
	}
	for(int i = 0; i < v[index].size(); i++)
		dfs(v[index][i], depth + 1);
}

int main() {
	int n, m, k, nleaf, leaf;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++) {
		scanf("%d%d", &nleaf, &k);
		for(int j = 0; j < k; j++) {
			scanf("%d", &leaf);
			v[nleaf].push_back(leaf);
		}
	}
	dfs(1, 0);
	printf("%d", res[0]);
	for(int i = 1; i <= maxdepth; i++)
		printf(" %d", res[i]);
	return 0;
}
