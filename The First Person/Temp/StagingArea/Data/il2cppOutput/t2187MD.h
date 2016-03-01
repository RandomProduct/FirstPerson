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

struct t2187;

#include "codegen/il2cpp-codegen.h"
#include "t4.h"

extern "C" void m15628_gshared (t2187 * __this, const MethodInfo* method);
#define m15628(__this, method) (( void (*) (t2187 *, const MethodInfo*))m15628_gshared)(__this, method)
extern "C" int32_t m15629_gshared (t2187 * __this, t4  p0, t4  p1, const MethodInfo* method);
#define m15629(__this, p0, p1, method) (( int32_t (*) (t2187 *, t4 , t4 , const MethodInfo*))m15629_gshared)(__this, p0, p1, method)
