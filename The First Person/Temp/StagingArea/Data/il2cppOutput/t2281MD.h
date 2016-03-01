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

struct t2281;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16769_gshared (t2281 * __this, const MethodInfo* method);
#define m16769(__this, method) (( void (*) (t2281 *, const MethodInfo*))m16769_gshared)(__this, method)
extern "C" void m16770_gshared (t17 * __this , const MethodInfo* method);
#define m16770(__this , method) (( void (*) (t17 * , const MethodInfo*))m16770_gshared)(__this , method)
extern "C" int32_t m16771_gshared (t2281 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m16771(__this, p0, p1, method) (( int32_t (*) (t2281 *, t17 *, t17 *, const MethodInfo*))m16771_gshared)(__this, p0, p1, method)
extern "C" t2281 * m16772_gshared (t17 * __this , const MethodInfo* method);
#define m16772(__this , method) (( t2281 * (*) (t17 * , const MethodInfo*))m16772_gshared)(__this , method)
