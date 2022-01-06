#include <iostream>
#include <cstring>
#include <stack>
#include <string>
using namespace std;

string num[10] = {
	"zero", "one", "two", "three", "four", "five",
	"six", "seven", "eight", "nine"
};

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++) {
		int j = (int)(s[i] - '0');
		cnt += j;
	}
	string ss = to_string(cnt);
	cout << num[ss[0] - '0'];
	for(int i = 1; i < ss.length(); i++)
		cout << " " << num[ss[i] - '0'];
	return 0;
}
