// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

// defines are for Windows resource compiler
#define spectre_VERSION_WINDOWS_COMMA 3, 19, 7, 18
#define spectre_VERSION_STRING "v3.5.1"

#ifndef RC_INVOKED  // Windows resource compiler

namespace cn {
inline const char *app_version() { return spectre_VERSION_STRING; }
}  // namespace cn

#endif
