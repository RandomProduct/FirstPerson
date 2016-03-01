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

struct t2225;

#include "codegen/il2cpp-codegen.h"
#include "t141.h"

extern "C" void m16199_gshared (t2225 * __this, const MethodInfo* method);
#define m16199(__this, method) (( void (*) (t2225 *, const MethodInfo*))m16199_gshared)(__this, method)
extern "C" int32_t m16200_gshared (t2225 * __this, t141  p0, const MethodInfo* method);
#define m16200(__this, p0, method) (( int32_t (*) (t2225 *, t141 , const MethodInfo*))m16200_gshared)(__this, p0, method)
extern "C" bool m16201_gshared (t2225 * __this, t141  p0, t141  p1, const MethodInfo* method);
#define m16201(__this, p0, p1, method) (( bool (*) (t2225 *, t141 , t141 , const MethodInfo*))m16201_gshared)(__this, p0, p1, method)
