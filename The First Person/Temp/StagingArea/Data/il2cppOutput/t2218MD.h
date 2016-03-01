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

struct t2218;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t3.h"

extern "C" void m16062_gshared (t2218 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m16062(__this, p0, p1, method) (( void (*) (t2218 *, t17 *, t22, const MethodInfo*))m16062_gshared)(__this, p0, p1, method)
extern "C" int32_t m16063_gshared (t2218 * __this, t3  p0, t3  p1, const MethodInfo* method);
#define m16063(__this, p0, p1, method) (( int32_t (*) (t2218 *, t3 , t3 , const MethodInfo*))m16063_gshared)(__this, p0, p1, method)
extern "C" t17 * m16064_gshared (t2218 * __this, t3  p0, t3  p1, t354 * p2, t17 * p3, const MethodInfo* method);
#define m16064(__this, p0, p1, p2, p3, method) (( t17 * (*) (t2218 *, t3 , t3 , t354 *, t17 *, const MethodInfo*))m16064_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16065_gshared (t2218 * __this, t17 * p0, const MethodInfo* method);
#define m16065(__this, p0, method) (( int32_t (*) (t2218 *, t17 *, const MethodInfo*))m16065_gshared)(__this, p0, method)
