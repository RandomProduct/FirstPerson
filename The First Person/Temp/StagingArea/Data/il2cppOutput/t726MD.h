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

struct t726;
struct t81;
struct t81_marshaled;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3849_gshared (t726 * __this, t81 * p0, t703 * p1, int32_t p2, const MethodInfo* method);
#define m3849(__this, p0, p1, p2, method) (( void (*) (t726 *, t81 *, t703 *, int32_t, const MethodInfo*))m3849_gshared)(__this, p0, p1, p2, method)
extern "C" void m17420_gshared (t726 * __this, t191* p0, const MethodInfo* method);
#define m17420(__this, p0, method) (( void (*) (t726 *, t191*, const MethodInfo*))m17420_gshared)(__this, p0, method)
