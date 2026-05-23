#pragma once

#include "src/base/macro.h"
#include "src/base/platform.h"
#include <cstdint>

NUB_NAMESPACE_BEGIN

/**
 *
 * Fixed-width integer types for general use.
 */

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

#if defined(NUB_PLAT_X86_64)
using usize = u64;
using isize = i64;

#elif defined(NUB_PLAT_I386)
using usize = u32;
using isize = i32;

#else
#error "target architecture is not supported"
#endif

NUB_NAMESPACE_END