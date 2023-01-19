#pragma once
#ifdef TENGU_PLATFORM_WINDOW

extern Tengu::Application* Tengu::CreateApplication();


int main()
{
	auto app = Tengu::CreateApplication();
	app->Run();
	delete app;
}
#endif // DEBUG