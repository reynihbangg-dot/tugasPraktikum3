#include <iostream>
using namespace std;
int main() {
	int p = 5;

	for (int t = 0; t < p; t++) {
		for (int m = 0; m < p - t; m++) {
			cout << " ";
		}
		int	val = 1;
		for (int v = 0; v <= t; v++) {
			cout << val << " ";
			val = val * (t - v) / (v + 1);
		}
		cout << endl;
	}
	cout << "\n======================================\n";
	cout << "\n\nNAMA: REYNARA PUTRA RAMADHAN";
	cout << "\n\nNIM: 25104410044";
	cout << "\n\nPRODI: TEKNIK INFORMATIKA - 1B";
	cout << "\n\n======================================\n";
	return 0;
}
