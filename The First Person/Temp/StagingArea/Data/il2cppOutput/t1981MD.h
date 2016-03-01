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

struct t1981;

#include "codegen/il2cpp-codegen.h"
#include "t262.h"

extern "C" void m12620_gshared (t1981 * __this, const MethodInfo* method);
#define m12620(__this, method) (( void (*) (t1981 *, const MethodInfo*))m12620_gshared)(__this, method)
extern "C" int32_t m12621_gshared (t1981 * __this, t262  p0, t262  p1, const MethodInfo* method);
#define m12621(__this, p0, p1, method) (( int32_t (*) (t1981 *, t262 , t262 , const MethodInfo*))m12621_gshared)(__this, p0, p1, method)
