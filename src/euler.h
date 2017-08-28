#include <map>
#include <functional>

using euler_t = std::map<size_t, std::function<void()>>;

euler_t& euler();

#define REGISTER_EULER(ind)                                                   \
	static char dummy_name_ ## __FILE__ ## __LINE__ ## __COUNTER__ = []() {  \
		euler()[(ind)] = []() {
#define REGISTER_EULER_END                                                    \
		};                                                                   \
		return 0;                                                            \
	}();
