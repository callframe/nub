#pragma once

#include "nub/base/platform.h"
#include <cstdint>

/**
 *
 * Fixed-width integer types for general use.
 */

using Nub_U8 = std::uint8_t;
using Nub_U16 = std::uint16_t;
using Nub_U32 = std::uint32_t;
using Nub_U64 = std::uint64_t;

using Nub_I8 = std::int8_t;
using Nub_I16 = std::int16_t;
using Nub_I32 = std::int32_t;
using Nub_I64 = std::int64_t;

using Nub_F32 = float;
using Nub_F64 = double;

#if defined(NUB_PLATFORM_X86_64)
using Nub_Usize = Nub_U64;
using Nub_Isize = Nub_I64;

#elif defined(NUB_PLATFORM_I386)
using Nub_Usize = Nub_U32;
using Nub_Isize = Nub_I32;

#else
#error "target architecture is not supported"
#endif
