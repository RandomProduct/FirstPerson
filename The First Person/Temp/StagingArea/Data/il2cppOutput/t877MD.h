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

extern "C" void t877_marshal(const t877& unmarshaled, t877_marshaled& marshaled);
extern "C" void t877_marshal_back(const t877_marshaled& marshaled, t877& unmarshaled);
extern "C" void t877_marshal_cleanup(t877_marshaled& marshaled);
