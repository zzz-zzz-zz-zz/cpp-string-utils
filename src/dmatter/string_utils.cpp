#include "string_utils.hpp"


namespace dmatter {    
namespace string_utils {

static const size_t bufsz = 1024 * 100; // Maximum string size after formatting


std::string string_from_format(const char *fmt, ...)
{
    char buf[bufsz] = {'\0'};

    va_list ap;
    va_start(ap, fmt);
    vsprintf(buf, fmt, ap);
    va_end(ap);

    return buf;
}

} } // namespace dmatter::string_utils
