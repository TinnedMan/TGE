// placed include directory in properties to /tge/src
#include "Tge.h"

//create a public class of the tge application
class Sandbox : public Tge::Application
{
	//constructor
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}
};

// new entry point
Tge::Application* Tge::CreateApplication()
{
	return new Sandbox();

	//// heap allocation to control lifetime
	//Sandbox* sandbox = new Sandbox();
	//sandbox->Run();
	//delete sandbox;

}