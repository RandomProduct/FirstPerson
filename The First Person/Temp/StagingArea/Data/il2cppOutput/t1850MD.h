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

struct t1850;

#include "codegen/il2cpp-codegen.h"
#include "t1706.h"

extern "C" void m11090_gshared (t1850 * __this, const MethodInfo* method);
#define m11090(__this, method) (( void (*) (t1850 *, const MethodInfo*))m11090_gshared)(__this, method)
extern "C" int32_t m18521_gshared (t1850 * __this, t1706  p0, t1706  p1, const MethodInfo* method);
#define m18521(__this, p0, p1, method) (( int32_t (*) (t1850 *, t1706 , t1706 , const MethodInfo*))m18521_gshared)(__this, p0, p1, method)
