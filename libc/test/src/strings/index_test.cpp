//===-- Unittests for index -----------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "test/src/string/StrchrTest.h"

#include "src/strings/index.h"
#include "test/UnitTest/Test.h"

STRCHR_TEST(Index, LIBC_NAMESPACE::index)
