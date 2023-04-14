#include "pikkuIkkuna.h"


namespace lve
{



	lve::pikkuIkkuna::pikkuIkkuna(int l, int k, std::string nimi):leveys{l}, korkeus {k}, ikkunanNimi {nimi}
	{
		initWindow();
	}

	lve::pikkuIkkuna::~pikkuIkkuna()
	{
		glfwDestroyWindow(ikkuna);
		glfwTerminate();


	}

	void lve::pikkuIkkuna::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		ikkuna = glfwCreateWindow(leveys, korkeus, ikkunanNimi.c_str(), nullptr, nullptr);


	}



}