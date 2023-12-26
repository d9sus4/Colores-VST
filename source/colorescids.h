//------------------------------------------------------------------------
// Copyright(c) 2023 Dsus.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace Dsus {

// parameter tags/ids, should be unique
enum ColoresParams: Steinberg::Vst::ParamID {
    kDryWetId = 100, // according to ChatGPT, "k" stands for constant
};

//------------------------------------------------------------------------
static const Steinberg::FUID kColoresProcessorUID (0xA658BDC9, 0xCC2C5715, 0xBABA6C02, 0xDAEF9FC1);
static const Steinberg::FUID kColoresControllerUID (0xF7C8EE15, 0xD8F953D6, 0x9E8C7D95, 0x1873C05B);

#define ColoresVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace Dsus
