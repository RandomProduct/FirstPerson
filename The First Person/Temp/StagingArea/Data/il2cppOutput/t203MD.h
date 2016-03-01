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

struct t203;
struct t203_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m714 (t203 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t203_marshal(const t203& unmarshaled, t203_marshaled& marshaled);
extern "C" void t203_marshal_back(const t203_marshaled& marshaled, t203& unmarshaled);
extern "C" void t203_marshal_cleanup(t203_marshaled& marshaled);
