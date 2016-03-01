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

struct t2283;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t521.h"

extern "C" void m16775_gshared (t2283 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m16775(__this, p0, p1, method) (( void (*) (t2283 *, t17 *, t22, const MethodInfo*))m16775_gshared)(__this, p0, p1, method)
extern "C" int32_t m16776_gshared (t2283 * __this, t521  p0, t521  p1, const MethodInfo* method);
#define m16776(__this, p0, p1, method) (( int32_t (*) (t2283 *, t521 , t521 , const MethodInfo*))m16776_gshared)(__this, p0, p1, method)
extern "C" t17 * m16777_gshared (t2283 * __this, t521  p0, t521  p1, t354 * p2, t17 * p3, const MethodInfo* method);
#define m16777(__this, p0, p1, p2, p3, method) (( t17 * (*) (t2283 *, t521 , t521 , t354 *, t17 *, const MethodInfo*))m16777_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16778_gshared (t2283 * __this, t17 * p0, const MethodInfo* method);
#define m16778(__this, p0, method) (( int32_t (*) (t2283 *, t17 *, const MethodInfo*))m16778_gshared)(__this, p0, method)
