#include <euler/1.h>

#include <catch.hpp>

TEST_CASE("Multiples of 3") {
	auto mult = get_multiples_less(1);
	REQUIRE( mult.size() == 0 );

	mult = get_multiples_less(4);
	REQUIRE( mult.size() == 1 );
	REQUIRE( mult[0] == 3 );

	mult = get_multiples_less(10);
	REQUIRE( mult.size() == 4);
	REQUIRE( mult[0] == 3);
	REQUIRE( mult[1] == 5);
	REQUIRE( mult[2] == 6);
	REQUIRE( mult[3] == 9);
}
