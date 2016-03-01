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

struct t613;
struct t613_marshaled;
struct t17;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m3718 (t613 * __this, t17 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3719 (t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3720 (t17 * __this , t613 * p0, t613 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t613_marshal(const t613& unmarshaled, t613_marshaled& marshaled);
extern "C" void t613_marshal_back(const t613_marshaled& marshaled, t613& unmarshaled);
extern "C" void t613_marshal_cleanup(t613_marshaled& marshaled);
