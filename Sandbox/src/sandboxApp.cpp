#include <Rocher.h>

class Sandbox : public Rocher::Application
{
public:
	Sandbox()

	{

	}
	~Sandbox()
	{

	}
};

Rocher::Application* Rocher::CreateApplication()
{
	return new Sandbox();
}