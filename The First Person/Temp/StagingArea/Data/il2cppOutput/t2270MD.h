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

struct t2270;

#include "codegen/il2cpp-codegen.h"
#include "t523.h"

extern "C" void m16618_gshared (t2270 * __this, const MethodInfo* method);
#define m16618(__this, method) (( void (*) (t2270 *, const MethodInfo*))m16618_gshared)(__this, method)
extern "C" int32_t m16619_gshared (t2270 * __this, t523  p0, const MethodInfo* method);
#define m16619(__this, p0, method) (( int32_t (*) (t2270 *, t523 , const MethodInfo*))m16619_gshared)(__this, p0, method)
extern "C" bool m16620_gshared (t2270 * __this, t523  p0, t523  p1, const MethodInfo* method);
#define m16620(__this, p0, p1, method) (( bool (*) (t2270 *, t523 , t523 , const MethodInfo*))m16620_gshared)(__this, p0, p1, method)
