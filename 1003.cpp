#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

#define N 505
#define INF 0x3f3f3f3f
int n, m, c1, c2;
int road[N][N];
int rescue[N];
int dis[N];
int num[N];
int hands[N];

inline void dijkstra() {
	for(int i = 0; i < n; i++) {
		dis[i] = road[c1][i];
		if(dis[i] != INF) num[i] = 1;
	}
	dis[c1] = -1;
	int t = n - 1;
	num[c1] = 1;
	hands[c1] = rescue[c1];
	while(t--) {
		int curMin = INF;
		int minIndex = 0;
		for(int i = 0; i < n; i++) {
			if(dis[i] != -1 && dis[i] < curMin) {
				curMin = dis[i];
				minIndex = i;
			}
		}
		dis[minIndex] = -1;
		if(hands[minIndex] == 0) {
			hands[minIndex] = hands[c1] + rescue[minIndex];
		}
		for(int i = 0; i < n; i++) {
			if(dis[i] != -1 && road[minIndex][i] != INF) {
				if(curMin + road[minIndex][i] < dis[i]) {
					dis[i] = curMin + road[minIndex][i];
					num[i] = num[minIndex];
					hands[i] = hands[minIndex] + rescue[i];
				} else if(curMin + road[minIndex][i] == dis[i]) {
					num[i] += num[minIndex];
					hands[i] = max(hands[i], rescue[i] + hands[minIndex]);
				}
			}
		}
	}
	printf("%d %d", num[c2], hands[c2]);
}

int main() {
	scanf("%d%d%d%d", &n, &m, &c1, &c2);
	for(int i = 0; i < n; i++)
		scanf("%d", &rescue[i]);
	int a, b, l;
	memset(road, INF, sizeof(road));
	while(m--) {
		scanf("%d%d%d", &a, &b, &l);
		road[a][b] = road[b][a] = l;
	}
	dijkstra();
	return 0;
}
