#include "AppYksi.h"


namespace lve {


	void AppYksi::run()
	{
		while (!pikkuIkkuna.suljeIkkuna())
		{
			glfwPollEvents();
		}

	}








}