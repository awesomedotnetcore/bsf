#pragma once

#include "BsPrerequisites.h"
#include <mono/jit/jit.h>

namespace BansheeEngine
{
	class BS_EXPORT ScriptMethod
	{
	public:
		MonoObject* invoke(MonoObject* instance, void** params);

		/**
		 * @brief	Gets a thunk for this method. A thunk is a C++ like function
		 * 			pointer that you can use for calling the method.
		 *
		 * @note	This is the fastest way of calling managed code.
		 */
		void* getThunk() const;

		CM::String getName() const;

	private:
		friend class ScriptClass;
		friend class ScriptProperty;

		ScriptMethod(MonoMethod* method);

		MonoMethod* mMethod;
		void* mThunk;
	};
}