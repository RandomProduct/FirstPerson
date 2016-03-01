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

struct t2279;

#include "codegen/il2cpp-codegen.h"
#include "t521.h"

extern "C" void m16762_gshared (t2279 * __this, const MethodInfo* method);
#define m16762(__this, method) (( void (*) (t2279 *, const MethodInfo*))m16762_gshared)(__this, method)
extern "C" int32_t m16763_gshared (t2279 * __this, t521  p0, const MethodInfo* method);
#define m16763(__this, p0, method) (( int32_t (*) (t2279 *, t521 , const MethodInfo*))m16763_gshared)(__this, p0, method)
extern "C" bool m16764_gshared (t2279 * __this, t521  p0, t521  p1, const MethodInfo* method);
#define m16764(__this, p0, p1, method) (( bool (*) (t2279 *, t521 , t521 , const MethodInfo*))m16764_gshared)(__this, p0, p1, method)
