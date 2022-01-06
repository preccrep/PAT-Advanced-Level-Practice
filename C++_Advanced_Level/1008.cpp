#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
	scanf("%d", &n);
	vector<int> v(n);
	int tmp, lasttmp = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		v[i] = tmp - lasttmp;
		lasttmp = tmp;
	}
	int totaltime = n*5;
	for(int i = 0; i < n; i++) {
		if(v[i] > 0) totaltime += v[i]*6;
		else if(v[i] < 0) totaltime += (-v[i])*4;
	}
	printf("%d", totaltime);
	return 0;
}
