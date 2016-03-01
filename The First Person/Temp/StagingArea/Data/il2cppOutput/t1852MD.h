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

struct t1852;

#include "codegen/il2cpp-codegen.h"
#include "t1725.h"

extern "C" void m11095_gshared (t1852 * __this, const MethodInfo* method);
#define m11095(__this, method) (( void (*) (t1852 *, const MethodInfo*))m11095_gshared)(__this, method)
extern "C" int32_t m18542_gshared (t1852 * __this, t1725  p0, t1725  p1, const MethodInfo* method);
#define m18542(__this, p0, p1, method) (( int32_t (*) (t1852 *, t1725 , t1725 , const MethodInfo*))m18542_gshared)(__this, p0, p1, method)
