#include <euler/euler.h>
#include <iostream>

using namespace std;

int main() {
	size_t index;
	cout << "which problem you need?\n > ";
	cin >> index;
	euler()[index]();

	return 0;
}
