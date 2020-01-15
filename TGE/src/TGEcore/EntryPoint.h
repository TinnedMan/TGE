#pragma once
#include "Application.h"
//check for windows
#ifdef TGE_PLATFORM_WINDOWS

extern Tge::Application* Tge::CreateApplication();;

int main(int argc, char** argv)
{
	auto app = Tge::CreateApplication();
	app->Run();
	delete app;
}
#endif // TGE_PLATFORM_

