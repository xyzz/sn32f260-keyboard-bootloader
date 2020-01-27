#pragma once

#if defined(TARGET_GENERIC)

#elif defined(TARGET_WOMIER_K66)
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 1
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 8
#else
#error Not configured for this target.
#endif
