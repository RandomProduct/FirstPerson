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

struct t2280;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t521.h"

extern "C" void m16765_gshared (t2280 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m16765(__this, p0, p1, method) (( void (*) (t2280 *, t17 *, t22, const MethodInfo*))m16765_gshared)(__this, p0, p1, method)
extern "C" bool m16766_gshared (t2280 * __this, t521  p0, const MethodInfo* method);
#define m16766(__this, p0, method) (( bool (*) (t2280 *, t521 , const MethodInfo*))m16766_gshared)(__this, p0, method)
extern "C" t17 * m16767_gshared (t2280 * __this, t521  p0, t354 * p1, t17 * p2, const MethodInfo* method);
#define m16767(__this, p0, p1, p2, method) (( t17 * (*) (t2280 *, t521 , t354 *, t17 *, const MethodInfo*))m16767_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16768_gshared (t2280 * __this, t17 * p0, const MethodInfo* method);
#define m16768(__this, p0, method) (( bool (*) (t2280 *, t17 *, const MethodInfo*))m16768_gshared)(__this, p0, method)
