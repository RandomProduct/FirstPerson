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

struct t2413;

#include "codegen/il2cpp-codegen.h"
#include "t1389.h"

extern "C" void m18130_gshared (t2413 * __this, const MethodInfo* method);
#define m18130(__this, method) (( void (*) (t2413 *, const MethodInfo*))m18130_gshared)(__this, method)
extern "C" int32_t m18131_gshared (t2413 * __this, t1389  p0, const MethodInfo* method);
#define m18131(__this, p0, method) (( int32_t (*) (t2413 *, t1389 , const MethodInfo*))m18131_gshared)(__this, p0, method)
extern "C" bool m18132_gshared (t2413 * __this, t1389  p0, t1389  p1, const MethodInfo* method);
#define m18132(__this, p0, p1, method) (( bool (*) (t2413 *, t1389 , t1389 , const MethodInfo*))m18132_gshared)(__this, p0, p1, method)
