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

struct t2214;

#include "codegen/il2cpp-codegen.h"
#include "t3.h"

extern "C" void m16049_gshared (t2214 * __this, const MethodInfo* method);
#define m16049(__this, method) (( void (*) (t2214 *, const MethodInfo*))m16049_gshared)(__this, method)
extern "C" int32_t m16050_gshared (t2214 * __this, t3  p0, const MethodInfo* method);
#define m16050(__this, p0, method) (( int32_t (*) (t2214 *, t3 , const MethodInfo*))m16050_gshared)(__this, p0, method)
extern "C" bool m16051_gshared (t2214 * __this, t3  p0, t3  p1, const MethodInfo* method);
#define m16051(__this, p0, p1, method) (( bool (*) (t2214 *, t3 , t3 , const MethodInfo*))m16051_gshared)(__this, p0, p1, method)
