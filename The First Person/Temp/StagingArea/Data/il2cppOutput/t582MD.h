﻿#pragma once

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

extern "C" void t582_marshal(const t582& unmarshaled, t582_marshaled& marshaled);
extern "C" void t582_marshal_back(const t582_marshaled& marshaled, t582& unmarshaled);
extern "C" void t582_marshal_cleanup(t582_marshaled& marshaled);
