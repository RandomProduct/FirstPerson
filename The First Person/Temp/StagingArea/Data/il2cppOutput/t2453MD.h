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

struct t2453;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18522_gshared (t2453 * __this, const MethodInfo* method);
#define m18522(__this, method) (( void (*) (t2453 *, const MethodInfo*))m18522_gshared)(__this, method)
extern "C" void m18523_gshared (t17 * __this , const MethodInfo* method);
#define m18523(__this , method) (( void (*) (t17 * , const MethodInfo*))m18523_gshared)(__this , method)
extern "C" int32_t m18524_gshared (t2453 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m18524(__this, p0, p1, method) (( int32_t (*) (t2453 *, t17 *, t17 *, const MethodInfo*))m18524_gshared)(__this, p0, p1, method)
extern "C" t2453 * m18525_gshared (t17 * __this , const MethodInfo* method);
#define m18525(__this , method) (( t2453 * (*) (t17 * , const MethodInfo*))m18525_gshared)(__this , method)
