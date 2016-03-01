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

struct t2351;
struct t703;
struct t35;
struct t17;
struct t681;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17615_gshared (t2351 * __this, const MethodInfo* method);
#define m17615(__this, method) (( void (*) (t2351 *, const MethodInfo*))m17615_gshared)(__this, method)
extern "C" t703 * m17616_gshared (t2351 * __this, t35* p0, t17 * p1, const MethodInfo* method);
#define m17616(__this, p0, p1, method) (( t703 * (*) (t2351 *, t35*, t17 *, const MethodInfo*))m17616_gshared)(__this, p0, p1, method)
extern "C" t681 * m17617_gshared (t2351 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17617(__this, p0, p1, method) (( t681 * (*) (t2351 *, t17 *, t703 *, const MethodInfo*))m17617_gshared)(__this, p0, p1, method)
