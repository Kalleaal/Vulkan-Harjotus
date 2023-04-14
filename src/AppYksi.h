#pragma once
#include "pikkuIkkuna.h"

namespace lve {

	class AppYksi
	{
	public:
		static constexpr int LEVEYS = 1920;
		static constexpr int KORKEUS = 1080;



		void run();




	private:
		pikkuIkkuna pikkuIkkuna{ LEVEYS, KORKEUS, "Terve Vulkan toimii!" };



	};









}




