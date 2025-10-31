#include <iostream>

using namespace std;

int main() {
	int n;
	bool prima = true;

	cout << "masukkan bilangan:";
	cin >> n;

	if (n <= 1) {
		prima = false;
	}
	else {
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				prima = true;
				break;
			}
		}
	}
	if (prima)
		cout << n << " adalah bilangan prima." << endl;
	else
		cout << n << " bukan bilangan prima" << endl;

	return 0;
}
