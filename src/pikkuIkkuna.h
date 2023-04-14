#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>


namespace lve
{
	class pikkuIkkuna
	{
	public:
		pikkuIkkuna(int l, int k, std::string nimi);
		~pikkuIkkuna();

		pikkuIkkuna(const pikkuIkkuna&) = delete;
		pikkuIkkuna& operator=(const pikkuIkkuna&) = delete;


		bool suljeIkkuna() { return glfwWindowShouldClose(ikkuna); }


	private:

		void initWindow();
	

		const int leveys;
		const int korkeus;

		std::string ikkunanNimi;
		GLFWwindow *ikkuna;
	};



}