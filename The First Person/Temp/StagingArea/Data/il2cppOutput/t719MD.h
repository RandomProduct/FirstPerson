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

extern "C" void t719_marshal(const t719& unmarshaled, t719_marshaled& marshaled);
extern "C" void t719_marshal_back(const t719_marshaled& marshaled, t719& unmarshaled);
extern "C" void t719_marshal_cleanup(t719_marshaled& marshaled);
