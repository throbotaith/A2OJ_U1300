/*
　8/26
 解法は特になし.問題文をよく読むこと
*/

#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <ctype.h>


using namespace std;

int main() {
	long long a,b,c = 0,d = 0;
	cin >> a;
	b = a;
	d = a;
	int k = 0;
	while (b != 0) {
		k = b % 10;
		if (k == 7 || k == 4) {
			c += 1;
		}
		b = b / 10;
	}
	if (c == 4 || c == 7) {
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	


}