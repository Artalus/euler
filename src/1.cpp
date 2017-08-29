#include "euler.h"
#include <iostream>
#include <vector>

/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

using namespace std;

vector<unsigned> get_multiples_less(unsigned limit) {
	vector<unsigned> result;
	result.reserve(limit/2);

	for (unsigned i = 1; i < limit; ++i) {
		if (!(i%3) || !(i%5)) {
			result.emplace_back(i);
		}
	}

	return result;
}

template<class Container>
void print_sequence(Container &&cont) {
	for (auto &&v : cont) {
		cout << v << ' ';
	}
	cout << '\n';
}

REGISTER_EULER(1, "Multiples of 3 and 5")

	unsigned n;
	cout << "input n\n > ";
	cin >> n;
	print_sequence(get_multiples_less(n));

REGISTER_EULER_END
