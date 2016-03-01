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

struct t2432;
struct t17;
struct t353;
struct t354;

#include "codegen/il2cpp-codegen.h"
#include "t22.h"

extern "C" void m18340_gshared (t2432 * __this, t17 * p0, t22 p1, const MethodInfo* method);
#define m18340(__this, p0, p1, method) (( void (*) (t2432 *, t17 *, t22, const MethodInfo*))m18340_gshared)(__this, p0, p1, method)
extern "C" t17 * m18341_gshared (t2432 * __this, const MethodInfo* method);
#define m18341(__this, method) (( t17 * (*) (t2432 *, const MethodInfo*))m18341_gshared)(__this, method)
extern "C" t17 * m18342_gshared (t2432 * __this, t354 * p0, t17 * p1, const MethodInfo* method);
#define m18342(__this, p0, p1, method) (( t17 * (*) (t2432 *, t354 *, t17 *, const MethodInfo*))m18342_gshared)(__this, p0, p1, method)
extern "C" t17 * m18343_gshared (t2432 * __this, t17 * p0, const MethodInfo* method);
#define m18343(__this, p0, method) (( t17 * (*) (t2432 *, t17 *, const MethodInfo*))m18343_gshared)(__this, p0, method)
