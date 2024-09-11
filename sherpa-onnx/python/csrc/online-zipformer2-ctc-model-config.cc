// sherpa-onnx/python/csrc/online-zipformer2-ctc-model-config.cc
//
// Copyright (c)  2023  Xiaomi Corporation

#include "sherpa-onnx/python/csrc/online-zipformer2-ctc-model-config.h"

#include <string>
#include <vector>

#include "sherpa-onnx/csrc/online-zipformer2-ctc-model-config.h"

namespace sherpa_onnx {

void PybindOnlineZipformer2CtcModelConfig(py::module *m) {
  using PyClass = OnlineZipformer2CtcModelConfig;
  py::class_<PyClass>(*m, "OnlineZipformer2CtcModelConfig")
      .def(py::init<const std::string &>(), py::arg("model"))
      .def_readwrite("model", &PyClass::model)
      .def("__str__", &PyClass::ToString);
}

}  // namespace sherpa_onnx
