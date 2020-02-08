#pragma once

#if defined(TARGET_GENERIC)

#elif defined(TARGET_WOMIER_K66)
/* Backspace */
#define BLKEY_INPUT_GPIO SN_GPIO1
#define BLKEY_INPUT_PIN 1
#define BLKEY_OUTPUT_GPIO SN_GPIO2
#define BLKEY_OUTPUT_PIN 8
#elif defined(TARGET_GANSS_GK87PRO)
/* Spacebar */
#define BLKEY_INPUT_GPIO SN_GPIO2
#define BLKEY_INPUT_PIN 8
#define BLKEY_OUTPUT_GPIO SN_GPIO0
#define BLKEY_OUTPUT_PIN 12
#else
#error Not configured for this target.
#endif
