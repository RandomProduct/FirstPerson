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

extern "C" void t615_marshal(const t615& unmarshaled, t615_marshaled& marshaled);
extern "C" void t615_marshal_back(const t615_marshaled& marshaled, t615& unmarshaled);
extern "C" void t615_marshal_cleanup(t615_marshaled& marshaled);
