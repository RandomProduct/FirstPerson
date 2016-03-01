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

struct t2389;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17889_gshared (t2389 * __this, const MethodInfo* method);
#define m17889(__this, method) (( void (*) (t2389 *, const MethodInfo*))m17889_gshared)(__this, method)
extern "C" int32_t m17890_gshared (t2389 * __this, t17 * p0, t17 * p1, const MethodInfo* method);
#define m17890(__this, p0, p1, method) (( int32_t (*) (t2389 *, t17 *, t17 *, const MethodInfo*))m17890_gshared)(__this, p0, p1, method)
