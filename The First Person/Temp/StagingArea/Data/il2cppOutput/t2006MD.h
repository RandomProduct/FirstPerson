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

struct t2006;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t1120.h"

extern "C" void m13104_gshared (t2006 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m13104(__this, p0, p1, method) (( void (*) (t2006 *, t17 *, t22, const MethodInfo*))m13104_gshared)(__this, p0, p1, method)
extern "C" t1120  m13105_gshared (t2006 * __this, int32_t p0, t17 * p1, const MethodInfo* method);
#define m13105(__this, p0, p1, method) (( t1120  (*) (t2006 *, int32_t, t17 *, const MethodInfo*))m13105_gshared)(__this, p0, p1, method)
extern "C" t17 * m13106_gshared (t2006 * __this, int32_t p0, t17 * p1, t354 * p2, t17 * p3, const MethodInfo* method);
#define m13106(__this, p0, p1, p2, p3, method) (( t17 * (*) (t2006 *, int32_t, t17 *, t354 *, t17 *, const MethodInfo*))m13106_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1120  m13107_gshared (t2006 * __this, t17 * p0, const MethodInfo* method);
#define m13107(__this, p0, method) (( t1120  (*) (t2006 *, t17 *, const MethodInfo*))m13107_gshared)(__this, p0, method)
