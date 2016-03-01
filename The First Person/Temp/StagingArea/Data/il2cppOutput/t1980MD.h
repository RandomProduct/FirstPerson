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

struct t1980;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12616_gshared (t1980 * __this, const MethodInfo* method);
#define m12616(__this, method) (( void (*) (t1980 *, const MethodInfo*))m12616_gshared)(__this, method)
extern "C" void m12617_gshared (t17 * __this , const MethodInfo* method);
#define m12617(__this , method) (( void (*) (t17 * , const MethodInfo*))m12617_gshared)(__this , method)
extern "C" int32_t m12618_gshared (t1980 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m12618(__this, p0, p1, method) (( int32_t (*) (t1980 *, t17 *, t17 *, const MethodInfo*))m12618_gshared)(__this, p0, p1, method)
extern "C" t1980 * m12619_gshared (t17 * __this , const MethodInfo* method);
#define m12619(__this , method) (( t1980 * (*) (t17 * , const MethodInfo*))m12619_gshared)(__this , method)
