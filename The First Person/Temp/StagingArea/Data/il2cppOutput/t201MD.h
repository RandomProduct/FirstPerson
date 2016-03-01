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

struct t201;
struct t201_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3030 (t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3031 (t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3032 (t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t201_marshal(const t201& unmarshaled, t201_marshaled& marshaled);
extern "C" void t201_marshal_back(const t201_marshaled& marshaled, t201& unmarshaled);
extern "C" void t201_marshal_cleanup(t201_marshaled& marshaled);
