#include <iostream>

template<class Container>
void print_sequence(Container &&cont) {
	for (auto &&v : cont) {
		std::cout << v << ' ';
	}
	std::cout << '\n';
}
