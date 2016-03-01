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

struct t2271;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"
#include "t523.h"

extern "C" void m16621_gshared (t2271 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m16621(__this, p0, p1, method) (( void (*) (t2271 *, t17 *, t22, const MethodInfo*))m16621_gshared)(__this, p0, p1, method)
extern "C" bool m16622_gshared (t2271 * __this, t523  p0, const MethodInfo* method);
#define m16622(__this, p0, method) (( bool (*) (t2271 *, t523 , const MethodInfo*))m16622_gshared)(__this, p0, method)
extern "C" t17 * m16623_gshared (t2271 * __this, t523  p0, t354 * p1, t17 * p2, const MethodInfo* method);
#define m16623(__this, p0, p1, p2, method) (( t17 * (*) (t2271 *, t523 , t354 *, t17 *, const MethodInfo*))m16623_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16624_gshared (t2271 * __this, t17 * p0, const MethodInfo* method);
#define m16624(__this, p0, method) (( bool (*) (t2271 *, t17 *, const MethodInfo*))m16624_gshared)(__this, p0, method)
