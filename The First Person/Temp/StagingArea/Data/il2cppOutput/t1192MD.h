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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1192_marshal(const t1192& unmarshaled, t1192_marshaled& marshaled);
extern "C" void t1192_marshal_back(const t1192_marshaled& marshaled, t1192& unmarshaled);
extern "C" void t1192_marshal_cleanup(t1192_marshaled& marshaled);
