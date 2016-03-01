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

struct t2217;

#include "codegen/il2cpp-codegen.h"
#include "t3.h"

extern "C" void m16060_gshared (t2217 * __this, const MethodInfo* method);
#define m16060(__this, method) (( void (*) (t2217 *, const MethodInfo*))m16060_gshared)(__this, method)
extern "C" int32_t m16061_gshared (t2217 * __this, t3  p0, t3  p1, const MethodInfo* method);
#define m16061(__this, p0, p1, method) (( int32_t (*) (t2217 *, t3 , t3 , const MethodInfo*))m16061_gshared)(__this, p0, p1, method)
