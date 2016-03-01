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

struct t2335;
struct t17;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17410_gshared (t2335 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17410(__this, p0, p1, method) (( void (*) (t2335 *, t17 *, t703 *, const MethodInfo*))m17410_gshared)(__this, p0, p1, method)
extern "C" void m17411_gshared (t2335 * __this, t191* p0, const MethodInfo* method);
#define m17411(__this, p0, method) (( void (*) (t2335 *, t191*, const MethodInfo*))m17411_gshared)(__this, p0, method)
extern "C" bool m17412_gshared (t2335 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17412(__this, p0, p1, method) (( bool (*) (t2335 *, t17 *, t703 *, const MethodInfo*))m17412_gshared)(__this, p0, p1, method)
