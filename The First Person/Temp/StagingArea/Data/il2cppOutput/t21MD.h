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

struct t21;
struct t21_marshaled;
struct t159;

#include "codegen/il2cpp-codegen.h"
#include "t158.h"

extern "C" void m449 (t21 * __this, t159* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3286 (t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3287 (t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3288 (t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m462 (t21 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t158  m675 (t21 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m674 (t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t158  m3289 (t21 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3290 (t21 * __this, t159* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t21_marshal(const t21& unmarshaled, t21_marshaled& marshaled);
extern "C" void t21_marshal_back(const t21_marshaled& marshaled, t21& unmarshaled);
extern "C" void t21_marshal_cleanup(t21_marshaled& marshaled);
