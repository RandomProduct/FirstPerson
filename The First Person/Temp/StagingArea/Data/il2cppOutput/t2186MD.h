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

struct t2186;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15624_gshared (t2186 * __this, const MethodInfo* method);
#define m15624(__this, method) (( void (*) (t2186 *, const MethodInfo*))m15624_gshared)(__this, method)
extern "C" void m15625_gshared (t17 * __this , const MethodInfo* method);
#define m15625(__this , method) (( void (*) (t17 * , const MethodInfo*))m15625_gshared)(__this , method)
extern "C" int32_t m15626_gshared (t2186 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m15626(__this, p0, p1, method) (( int32_t (*) (t2186 *, t17 *, t17 *, const MethodInfo*))m15626_gshared)(__this, p0, p1, method)
extern "C" t2186 * m15627_gshared (t17 * __this , const MethodInfo* method);
#define m15627(__this , method) (( t2186 * (*) (t17 * , const MethodInfo*))m15627_gshared)(__this , method)
