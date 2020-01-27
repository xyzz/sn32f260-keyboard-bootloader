# Cortex-M0 doesn't have SCB->VTOR, so we hack around it by proxying all exceptions into the actual firmware

.thumb

.thumb_func
.global exc_proxy
exc_proxy:
# Read VECTACTIVE from ICSR
ldr r0, =0xE000ED04
ldr r0, [r0]
uxtb r0, r0
# Find function pointer in the second stage
lsl r0, r0, #2
ldr r1, =0x200
ldr r0, [r1, r0]
bx r0
