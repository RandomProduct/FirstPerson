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

struct t2333;
struct t17;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17403_gshared (t2333 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17403(__this, p0, p1, method) (( void (*) (t2333 *, t17 *, t703 *, const MethodInfo*))m17403_gshared)(__this, p0, p1, method)
extern "C" void m17404_gshared (t2333 * __this, t191* p0, const MethodInfo* method);
#define m17404(__this, p0, method) (( void (*) (t2333 *, t191*, const MethodInfo*))m17404_gshared)(__this, p0, method)
extern "C" bool m17405_gshared (t2333 * __this, t17 * p0, t703 * p1, const MethodInfo* method);
#define m17405(__this, p0, p1, method) (( bool (*) (t2333 *, t17 *, t703 *, const MethodInfo*))m17405_gshared)(__this, p0, p1, method)
