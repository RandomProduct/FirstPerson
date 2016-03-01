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

struct t2337;
struct t81;
struct t81_marshaled;
struct t703;
struct t17;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17417_gshared (t2337 * __this, t81 * p0, t703 * p1, t17 * p2, const MethodInfo* method);
#define m17417(__this, p0, p1, p2, method) (( void (*) (t2337 *, t81 *, t703 *, t17 *, const MethodInfo*))m17417_gshared)(__this, p0, p1, p2, method)
extern "C" void m17418_gshared (t2337 * __this, t191* p0, const MethodInfo* method);
#define m17418(__this, p0, method) (( void (*) (t2337 *, t191*, const MethodInfo*))m17418_gshared)(__this, p0, method)
