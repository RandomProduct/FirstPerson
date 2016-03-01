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

extern "C" void t1303_marshal(const t1303& unmarshaled, t1303_marshaled& marshaled);
extern "C" void t1303_marshal_back(const t1303_marshaled& marshaled, t1303& unmarshaled);
extern "C" void t1303_marshal_cleanup(t1303_marshaled& marshaled);
