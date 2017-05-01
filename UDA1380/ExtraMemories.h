#pragma once

//E.g. void CCMRAM_TEXT func();
#define CCMRAM_TEXT __attribute__((section(".ccmram_text")))

//E.g. int CCMRAM_DATA g_Initialized = 1;
#define CCMRAM_DATA __attribute__((section(".ccmram_data")))

//E.g. int CCMRAM_BSS g_Uninitialized;
#define CCMRAM_BSS __attribute__((section(".ccmram_bss")))


