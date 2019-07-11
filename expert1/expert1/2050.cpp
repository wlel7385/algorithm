#include<iostream>
#include<string>
using namespace std;

string a;
int main() {
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		printf("%d ", a[i] - 64);
	}
	
}