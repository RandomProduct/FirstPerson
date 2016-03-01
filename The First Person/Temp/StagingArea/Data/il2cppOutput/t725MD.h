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

struct t725;
struct t81;
struct t81_marshaled;
struct t703;
struct t191;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3848_gshared (t725 * __this, t81 * p0, t703 * p1, float p2, const MethodInfo* method);
#define m3848(__this, p0, p1, p2, method) (( void (*) (t725 *, t81 *, t703 *, float, const MethodInfo*))m3848_gshared)(__this, p0, p1, p2, method)
extern "C" void m17419_gshared (t725 * __this, t191* p0, const MethodInfo* method);
#define m17419(__this, p0, method) (( void (*) (t725 *, t191*, const MethodInfo*))m17419_gshared)(__this, p0, method)
