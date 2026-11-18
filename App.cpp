#include "App.hpp"

//

#include <stdlib.h>

//

#include "Logger.hpp"

//

/// @brief
void App::exec() {
  if (!modelInference_.init()) {
    return;
  }
  while (true) {

  }
}

/// @brief
int App::exit() { return EXIT_SUCCESS; }
