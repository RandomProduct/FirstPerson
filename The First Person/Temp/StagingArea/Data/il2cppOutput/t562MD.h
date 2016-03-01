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

struct t562;
struct t562_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3166 (t562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t562_marshal(const t562& unmarshaled, t562_marshaled& marshaled);
extern "C" void t562_marshal_back(const t562_marshaled& marshaled, t562& unmarshaled);
extern "C" void t562_marshal_cleanup(t562_marshaled& marshaled);
