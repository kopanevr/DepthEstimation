#include "App.hpp"

//

#include <stdlib.h>

//

#include "Logger.hpp"

//

/// @brief
void App::exec() {
  modelInference_.init();
  while (true) {
  }
}

/// @brief
int App::exit() { return EXIT_SUCCESS; }
