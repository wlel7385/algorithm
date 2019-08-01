#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int T;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int cnt = 0;
		string x;
		cin >> x;
		if (x[0] -'0'== 1) {
			cnt++;
		}
		for (int j = 1; j < x.size(); j++) {
			if (x[j - 1] == x[j]) {
				continue;
			}
			else {
				cnt++;
			}
		}
		printf("#%d %d\n", i + 1, cnt);
	}
}