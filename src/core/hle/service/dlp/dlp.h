// Copyright 2016 Citra Emulator Project
// Copyright 2024 Borked3DS Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Core {
class System;
}

namespace Service::DLP {

/// Initializes the DLP services.
void InstallInterfaces(Core::System& system);

} // namespace Service::DLP
