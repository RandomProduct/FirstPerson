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

struct t2215;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t3.h"

extern "C" void m16052_gshared (t2215 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m16052(__this, p0, p1, method) (( void (*) (t2215 *, t17 *, t22, const MethodInfo*))m16052_gshared)(__this, p0, p1, method)
extern "C" bool m16053_gshared (t2215 * __this, t3  p0, const MethodInfo* method);
#define m16053(__this, p0, method) (( bool (*) (t2215 *, t3 , const MethodInfo*))m16053_gshared)(__this, p0, method)
extern "C" t17 * m16054_gshared (t2215 * __this, t3  p0, t354 * p1, t17 * p2, const MethodInfo* method);
#define m16054(__this, p0, p1, p2, method) (( t17 * (*) (t2215 *, t3 , t354 *, t17 *, const MethodInfo*))m16054_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16055_gshared (t2215 * __this, t17 * p0, const MethodInfo* method);
#define m16055(__this, p0, method) (( bool (*) (t2215 *, t17 *, const MethodInfo*))m16055_gshared)(__this, p0, method)
