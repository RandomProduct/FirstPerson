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

struct t2350;
struct t703;
struct t35;
struct t17;
struct t681;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17612_gshared (t2350 * __this, const MethodInfo* method);
#define m17612(__this, method) (( void (*) (t2350 *, const MethodInfo*))m17612_gshared)(__this, method)
extern "C" t703 * m17613_gshared (t2350 * __this, t35* p0, t17 * p1, const MethodInfo* method);
#define m17613(__this, p0, p1, method) (( t703 * (*) (t2350 *, t35*, t17 *, const MethodInfo*))m17613_gshared)(__this, p0, p1, method)
extern "C" t681 * m17614_gshared (t2350 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17614(__this, p0, p1, method) (( t681 * (*) (t2350 *, t17 *, t703 *, const MethodInfo*))m17614_gshared)(__this, p0, p1, method)
