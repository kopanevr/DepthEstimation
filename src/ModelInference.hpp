#pragma once

//

#include <memory>

//

#include "onnxruntime_cxx_api.h"

//

/// @brief
class ModelInference final {
public:
  bool init();

private:
  std::unique_ptr<Ort::Session> session_;

  std::unique_ptr<Ort::Value> inputTensor_;
  std::unique_ptr<Ort::Value> outputTensor_;
};
