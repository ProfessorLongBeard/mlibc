#ifndef MLIBC_RTLD_CONFIG
#define MLIBC_RTLD_CONFIG

namespace mlibc {

struct RtldConfig {
	bool secureRequired;
};

}

extern "C" const mlibc::RtldConfig &__dlapi_get_config();

#ifndef MLIBC_BUILDING_RTLD
namespace mlibc {

inline const RtldConfig &rtldConfig() {
	return __dlapi_get_config();
}

}
#endif

#endif // MLIBC_RTLD_CONFIG
