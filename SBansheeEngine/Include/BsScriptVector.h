#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "BsVector2.h"
#include "BsVector3.h"
#include "BsVector4.h"

namespace BansheeEngine
{
	/**
	 * @brief	Interop class between C++ & CLR for Vector2.
	 */
	class BS_SCR_BE_EXPORT ScriptVector2 : public ScriptObject <ScriptVector2>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "Vector2")

		/**
		 * @brief	Unboxes a boxed managed Vector2 struct and returns
		 *			the native version of the structure.
		 */
		static Vector2 unbox(MonoObject* obj);

		/**
		 * @brief	Boxes a native Vector2 struct and returns
		 *			a managed object containing it.
		 */
		static MonoObject* box(const Vector2& value);

	private:
		ScriptVector2(MonoObject* instance);
	};

	/**
	 * @brief	Interop class between C++ & CLR for Vector3.
	 */
	class BS_SCR_BE_EXPORT ScriptVector3 : public ScriptObject <ScriptVector3>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "Vector3")

		/**
		 * @brief	Unboxes a boxed managed Vector3 struct and returns
		 *			the native version of the structure.
		 */
		static Vector3 unbox(MonoObject* obj);

		/**
		 * @brief	Boxes a native Vector3 struct and returns
		 *			a managed object containing it.
		 */
		static MonoObject* box(const Vector3& value);

	private:
		ScriptVector3(MonoObject* instance);
	};

	/**
	 * @brief	Interop class between C++ & CLR for Vector4.
	 */
	class BS_SCR_BE_EXPORT ScriptVector4 : public ScriptObject <ScriptVector4>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "Vector4")

		/**
		 * @brief	Unboxes a boxed managed Vector4 struct and returns
		 *			the native version of the structure.
		 */
		static Vector4 unbox(MonoObject* obj);

		/**
		 * @brief	Boxes a native Vector4 struct and returns
		 *			a managed object containing it.
		 */
		static MonoObject* box(const Vector4& value);

	private:
		ScriptVector4(MonoObject* instance);
	};
}