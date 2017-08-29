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

REGISTER_EULER(1, "Multiples of 3 and 5")

	for (auto v : get_multiples_less(10)) {
		cout << v << ' ';
	}
	cout << '\n';

REGISTER_EULER_END
