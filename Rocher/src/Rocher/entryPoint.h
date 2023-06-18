#pragma once

#include<stdio.h>

#ifdef RC_PLATFORM_WINDOWS

extern Rocher::Application* Rocher::CreateApplication();

int main(int argc, char** argv)   
{
	Rocher::Logging::Init();
	int a = 5;
	RC_CORE_WARN(a);
	RC_ERROR(a);


	auto app = Rocher::CreateApplication();
	app->Run();
	delete app;
}
#endif