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

struct t728;
struct t81;
struct t81_marshaled;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3851_gshared (t728 * __this, t81 * p0, t703 * p1, bool p2, const MethodInfo* method);
#define m3851(__this, p0, p1, p2, method) (( void (*) (t728 *, t81 *, t703 *, bool, const MethodInfo*))m3851_gshared)(__this, p0, p1, p2, method)
extern "C" void m17426_gshared (t728 * __this, t191* p0, const MethodInfo* method);
#define m17426(__this, p0, method) (( void (*) (t728 *, t191*, const MethodInfo*))m17426_gshared)(__this, p0, method)
