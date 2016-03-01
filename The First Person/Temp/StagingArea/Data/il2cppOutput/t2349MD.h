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

struct t2349;
struct t703;
struct t35;
struct t17;
struct t681;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17609_gshared (t2349 * __this, const MethodInfo* method);
#define m17609(__this, method) (( void (*) (t2349 *, const MethodInfo*))m17609_gshared)(__this, method)
extern "C" t703 * m17610_gshared (t2349 * __this, t35* p0, t17 * p1, const MethodInfo* method);
#define m17610(__this, p0, p1, method) (( t703 * (*) (t2349 *, t35*, t17 *, const MethodInfo*))m17610_gshared)(__this, p0, p1, method)
extern "C" t681 * m17611_gshared (t2349 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17611(__this, p0, p1, method) (( t681 * (*) (t2349 *, t17 *, t703 *, const MethodInfo*))m17611_gshared)(__this, p0, p1, method)
