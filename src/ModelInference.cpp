#include "ModelInference.hpp"

//

/// @brief
bool ModelInference::init() {
  Ort::Env env(OrtLoggingLevel::ORT_LOGGING_LEVEL_WARNING, "onnxRumtime");

  //

  Ort::SessionOptions sessionOptions{};
  sessionOptions.SetIntraOpNumThreads(1);

  //

  const ORTCHAR_T *model_path = "../models/yolo26s-depth.pt";
  session_.reset(new (std::nothrow) Ort::Session(env, model_path, sessionOptions));
  if (!session_) {
    return false;
  }

  inputTensor_.reset(new (std::nothrow) Ort::Value::CreateTensor<float>())
  if (!inputTensor_) {
    return false;
  }
  return true;
}
