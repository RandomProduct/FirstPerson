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

struct t2272;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16625_gshared (t2272 * __this, const MethodInfo* method);
#define m16625(__this, method) (( void (*) (t2272 *, const MethodInfo*))m16625_gshared)(__this, method)
extern "C" void m16626_gshared (t17 * __this , const MethodInfo* method);
#define m16626(__this , method) (( void (*) (t17 * , const MethodInfo*))m16626_gshared)(__this , method)
extern "C" int32_t m16627_gshared (t2272 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m16627(__this, p0, p1, method) (( int32_t (*) (t2272 *, t17 *, t17 *, const MethodInfo*))m16627_gshared)(__this, p0, p1, method)
extern "C" t2272 * m16628_gshared (t17 * __this , const MethodInfo* method);
#define m16628(__this , method) (( t2272 * (*) (t17 * , const MethodInfo*))m16628_gshared)(__this , method)
