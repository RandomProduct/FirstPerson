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

struct t2450;

#include "codegen/il2cpp-codegen.h"
#include "t624.h"

extern "C" void m18509_gshared (t2450 * __this, const MethodInfo* method);
#define m18509(__this, method) (( void (*) (t2450 *, const MethodInfo*))m18509_gshared)(__this, method)
extern "C" int32_t m18510_gshared (t2450 * __this, t624  p0, t624  p1, const MethodInfo* method);
#define m18510(__this, p0, p1, method) (( int32_t (*) (t2450 *, t624 , t624 , const MethodInfo*))m18510_gshared)(__this, p0, p1, method)
