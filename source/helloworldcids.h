//------------------------------------------------------------------------
// Copyright(c) 2022 Steinberg Media Technologies GmbH.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace Steinberg__Wurst {
//------------------------------------------------------------------------
static const Steinberg::FUID kHelloWorldProcessorUID (0x32C50013, 0xFF5F5CB4, 0x871C312D, 0xB4F42368);
static const Steinberg::FUID kHelloWorldControllerUID (0xAE34DD83, 0x308259DF, 0xA0D88E2F, 0xB1C1CB8B);

#define HelloWorldVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace Steinberg__Wurst
