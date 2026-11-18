#include "ModelInference.hpp"

//

/// @brief
void ModelInference::init() {
  Ort::Env env(OrtLoggingLevel::ORT_LOGGING_LEVEL_WARNING, "onnxRumtime");
  Ort::SessionOptions sessionOptions{};
}
