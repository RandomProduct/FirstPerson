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

struct t35;

#include "codegen/il2cpp-codegen.h"
#include "t1419.h"

extern "C" void m8741 (t1419 * __this, t35* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1419_marshal(const t1419& unmarshaled, t1419_marshaled& marshaled);
extern "C" void t1419_marshal_back(const t1419_marshaled& marshaled, t1419& unmarshaled);
extern "C" void t1419_marshal_cleanup(t1419_marshaled& marshaled);
