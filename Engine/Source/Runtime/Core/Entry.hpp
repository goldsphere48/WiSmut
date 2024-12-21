#pragma once
#include <Application/Application.hpp>

Wi::Application* CreateApplication();

inline int Main()
{
	Wi::Application* app = CreateApplication();
	app->Run();
	delete app;
	return 0;
}

int main()
{
	Main();
}
