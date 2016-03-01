#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2463;

#include "codegen/il2cpp-codegen.h"
#include "t1036.h"

extern "C" void m18600_gshared (t2463 * __this, const MethodInfo* method);
#define m18600(__this, method) (( void (*) (t2463 *, const MethodInfo*))m18600_gshared)(__this, method)
extern "C" int32_t m18601_gshared (t2463 * __this, t1036  p0, t1036  p1, const MethodInfo* method);
#define m18601(__this, p0, p1, method) (( int32_t (*) (t2463 *, t1036 , t1036 , const MethodInfo*))m18601_gshared)(__this, p0, p1, method)
