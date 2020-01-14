#pragma once
#include "Core.h"

namespace Tge {
	// runs the declspec using core.h macro
	class TGE_API Application
	{
	public:
		Application();

		virtual ~Application();

		void Run();
	};

}