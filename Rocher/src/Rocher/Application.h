#pragma once

#include "Core.h"

namespace Rocher
{
	class ROCHER_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	// to be defined in client 
	Application* CreateApplication();
}
