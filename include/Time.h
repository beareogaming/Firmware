#pragma once

// Forward shim to ensure system C time definitions are available
// If this file is picked up due to case-insensitive resolution of <time.h>,
// include the next matching system header and avoid custom definitions here.
#include_next <time.h>
