#pragma once

#include "nub/base/bits.h"
#include "nub/base/macro.h"

NUB_NAMESPACE_BEGIN

struct String {
  char *inner;
  usize length;
};

NUB_NAMESPACE_END