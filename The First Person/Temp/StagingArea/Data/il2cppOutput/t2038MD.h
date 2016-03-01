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

struct t2038;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t2032.h"

extern "C" void m13426_gshared (t2038 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m13426(__this, p0, p1, method) (( void (*) (t2038 *, t17 *, t22, const MethodInfo*))m13426_gshared)(__this, p0, p1, method)
extern "C" t2032  m13427_gshared (t2038 * __this, t17 * p0, int32_t p1, const MethodInfo* method);
#define m13427(__this, p0, p1, method) (( t2032  (*) (t2038 *, t17 *, int32_t, const MethodInfo*))m13427_gshared)(__this, p0, p1, method)
extern "C" t17 * m13428_gshared (t2038 * __this, t17 * p0, int32_t p1, t354 * p2, t17 * p3, const MethodInfo* method);
#define m13428(__this, p0, p1, p2, p3, method) (( t17 * (*) (t2038 *, t17 *, int32_t, t354 *, t17 *, const MethodInfo*))m13428_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2032  m13429_gshared (t2038 * __this, t17 * p0, const MethodInfo* method);
#define m13429(__this, p0, method) (( t2032  (*) (t2038 *, t17 *, const MethodInfo*))m13429_gshared)(__this, p0, method)
