#include "../include/uincampus/version.hpp"

#ifndef UIN_VERSION
#define UIN_VERSION "0.0.0"
#endif

namespace uin {

std::string_view version()
{
    return UIN_VERSION; // macro fournie par CMake
}

} // namespace uin
