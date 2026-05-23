#pragma once

/*
 *
 * Platform detection macros.
 */

#if defined(__x86_64__) || defined(_M_X64)
#define NUB_PLATFORM_X86_64
#elif defined(__i386__) || defined(_M_IX86)
#define NUB_PLATFORM_I386
#else
#error "target architecture is not supported"
#endif

/*
 *
 * Compiler detection macros.
 */

#if defined(__clang__)
#define NUB_COMPILER_CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
#define NUB_COMPILER_GNUC
#elif defined(_MSC_VER)
#define NUB_COMPILER_MSVC
#else
#error "compiler is not supported"
#endif