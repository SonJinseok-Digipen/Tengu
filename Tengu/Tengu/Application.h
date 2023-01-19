#pragma once
#include"Core.h"
namespace Tengu
{ 
	class TENGU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
}