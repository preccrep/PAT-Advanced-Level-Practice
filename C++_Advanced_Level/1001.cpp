#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int a, b, c, d;
char s[15];

int main() {
    cin >> a >> b;
    c = a + b;
    if(c < 0) d = 1;
    else d = 0;
    c = abs(c);
    int cnt = 0, i = 0;
    s[0] = '0';
    while(c) {
        int d = c % 10;
        c /= 10;
        cnt++;
        s[i++] = (char)(d + '0');
        if(c && cnt == 3) {
            s[i++] = ',';
            cnt = 0;
        }
    }
    if(d) cout << '-';
    for(int i = strlen(s) - 1; i >= 0; i--)
        cout << s[i];
    return 0;
}
