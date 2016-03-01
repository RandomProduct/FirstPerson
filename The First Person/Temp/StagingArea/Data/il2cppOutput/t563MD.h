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

struct t563;
struct t563_marshaled;
struct t35;
struct t164;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2779 (t563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2780 (t17 * __this , t563 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t563 * m2781 (t17 * __this , t35* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t563 * m2782 (t17 * __this , t164 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t563 * m2783 (t17 * __this , t164 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t563_marshal(const t563& unmarshaled, t563_marshaled& marshaled);
extern "C" void t563_marshal_back(const t563_marshaled& marshaled, t563& unmarshaled);
extern "C" void t563_marshal_cleanup(t563_marshaled& marshaled);
