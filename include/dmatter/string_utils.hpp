#ifndef DMATTER_STRING_UTILS_H_
#define DMATTER_STRING_UTILS_H_

#include <string>
#include <cstdarg>
#include <cstddef>
#include <cstdio>


#define DMATTER_STRING_UTILS_VERSION_MAJOR 1
#define DMATTER_STRING_UTILS_VERSION_MINOR 0
#define DMATTER_STRING_UTILS_VERSION_PATCH 0


namespace dmatter {         // My nickname
namespace string_utils {

/**
 * Function which allows creating std::string objects from c-like formatting 
 * @since 1.0
 * 
 * @param fmt - Format string. Must be Null-terminated
 * @param ... - Arguments of basic types(e.g. int, char*(with '\0' at the end), double, etc.)
 * 
 * @return string object filled with formatted string
 * 
 * WARNING: max formatted string size is defined in string_utils.cpp and equal 1024*100 bytes
 * 
 * Example:
 *     #include <iostream>
 *     #include <dmatter/string_utils.hpp>
 *     ...
 *     using namespace dmatter::string_utils;
 *     auto s = string_from_format("My name is %s and I'm %d years old", "Nataly", 22);
 *     std::cout << s << std::endl; // "My name is Nataly and I'm 22 years old"
 */
std::string string_from_format(const char *fmt, ...);    
    
} } // namespace dmatter::string_utils

#endif // DMATTER_STRING_UTILS_H_
