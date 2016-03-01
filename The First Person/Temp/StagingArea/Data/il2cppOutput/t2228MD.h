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

struct t2228;

#include "codegen/il2cpp-codegen.h"
#include "t141.h"

extern "C" void m16210_gshared (t2228 * __this, const MethodInfo* method);
#define m16210(__this, method) (( void (*) (t2228 *, const MethodInfo*))m16210_gshared)(__this, method)
extern "C" int32_t m16211_gshared (t2228 * __this, t141  p0, t141  p1, const MethodInfo* method);
#define m16211(__this, p0, p1, method) (( int32_t (*) (t2228 *, t141 , t141 , const MethodInfo*))m16211_gshared)(__this, p0, p1, method)
