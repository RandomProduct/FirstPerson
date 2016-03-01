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

struct t2135;
struct t17;
struct t703;
struct t2134;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14821_gshared (t2135 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m14821(__this, p0, p1, method) (( void (*) (t2135 *, t17 *, t703 *, const MethodInfo*))m14821_gshared)(__this, p0, p1, method)
extern "C" void m14822_gshared (t2135 * __this, t2134 * p0, const MethodInfo* method);
#define m14822(__this, p0, method) (( void (*) (t2135 *, t2134 *, const MethodInfo*))m14822_gshared)(__this, p0, method)
extern "C" void m14823_gshared (t2135 * __this, t191* p0, const MethodInfo* method);
#define m14823(__this, p0, method) (( void (*) (t2135 *, t191*, const MethodInfo*))m14823_gshared)(__this, p0, method)
extern "C" bool m14824_gshared (t2135 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m14824(__this, p0, p1, method) (( bool (*) (t2135 *, t17 *, t703 *, const MethodInfo*))m14824_gshared)(__this, p0, p1, method)
