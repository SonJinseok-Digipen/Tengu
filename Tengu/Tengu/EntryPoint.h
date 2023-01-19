#pragma once
#ifdef TENGU_PLATFORM_WINDOW

extern Tengu::Application* Tengu::CreateApplication();

int main()
{
	Tengu::Logger::Init();
	TENGU_CORE_ERROR("My First Error message");
	auto app = Tengu::CreateApplication();
	app->Run();
	delete app;
}
#endif // DEBUG