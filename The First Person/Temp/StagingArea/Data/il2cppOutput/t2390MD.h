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

struct t2390;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17891_gshared (t2390 * __this, const MethodInfo* method);
#define m17891(__this, method) (( void (*) (t2390 *, const MethodInfo*))m17891_gshared)(__this, method)
extern "C" int32_t m17892_gshared (t2390 * __this, t17 * p0, const MethodInfo* method);
#define m17892(__this, p0, method) (( int32_t (*) (t2390 *, t17 *, const MethodInfo*))m17892_gshared)(__this, p0, method)
extern "C" bool m17893_gshared (t2390 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m17893(__this, p0, p1, method) (( bool (*) (t2390 *, t17 *, t17 *, const MethodInfo*))m17893_gshared)(__this, p0, p1, method)
