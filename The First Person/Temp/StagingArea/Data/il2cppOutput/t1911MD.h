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

struct t1911;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t1120.h"

extern "C" void m11831_gshared (t1911 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m11831(__this, p0, p1, method) (( void (*) (t1911 *, t17 *, t22, const MethodInfo*))m11831_gshared)(__this, p0, p1, method)
extern "C" t1120  m11832_gshared (t1911 * __this, t17 * p0, bool p1, const MethodInfo* method);
#define m11832(__this, p0, p1, method) (( t1120  (*) (t1911 *, t17 *, bool, const MethodInfo*))m11832_gshared)(__this, p0, p1, method)
extern "C" t17 * m11833_gshared (t1911 * __this, t17 * p0, bool p1, t354 * p2, t17 * p3, const MethodInfo* method);
#define m11833(__this, p0, p1, p2, p3, method) (( t17 * (*) (t1911 *, t17 *, bool, t354 *, t17 *, const MethodInfo*))m11833_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1120  m11834_gshared (t1911 * __this, t17 * p0, const MethodInfo* method);
#define m11834(__this, p0, method) (( t1120  (*) (t1911 *, t17 *, const MethodInfo*))m11834_gshared)(__this, p0, method)
