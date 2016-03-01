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

extern "C" void t904_marshal(const t904& unmarshaled, t904_marshaled& marshaled);
extern "C" void t904_marshal_back(const t904_marshaled& marshaled, t904& unmarshaled);
extern "C" void t904_marshal_cleanup(t904_marshaled& marshaled);
