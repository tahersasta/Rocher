#pragma once

#include<stdio.h>

#ifdef RC_PLATFORM_WINDOWS

extern Rocher::Application* Rocher::CreateApplication();

int main(int argc, char** argv)   
{
	printf("ROCHER ENGINE");
	auto app = Rocher::CreateApplication();
	app->Run();
	delete app;
}
#endif