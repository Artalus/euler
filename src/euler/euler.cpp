#include "euler.h"

euler_t& euler() {
	static euler_t e;
	return e;
}
