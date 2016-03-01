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

struct t2331;
struct t17;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17396_gshared (t2331 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17396(__this, p0, p1, method) (( void (*) (t2331 *, t17 *, t703 *, const MethodInfo*))m17396_gshared)(__this, p0, p1, method)
extern "C" void m17397_gshared (t2331 * __this, t191* p0, const MethodInfo* method);
#define m17397(__this, p0, method) (( void (*) (t2331 *, t191*, const MethodInfo*))m17397_gshared)(__this, p0, method)
extern "C" bool m17398_gshared (t2331 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17398(__this, p0, p1, method) (( bool (*) (t2331 *, t17 *, t703 *, const MethodInfo*))m17398_gshared)(__this, p0, p1, method)
