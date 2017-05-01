#include "ExtraMemories.h"

void __attribute__((constructor)) CCMRAM_Init()
{
	extern void *_siccmram_text, *_sccmram_text, *_eccmram_text;
	extern void *_siccmram_data, *_sccmram_data, *_eccmram_data;
	extern void *_sccmram_bss, *_eccmram_bss;

	void **pSource, **pDest;
	for (pSource = &_siccmram_text, pDest = &_sccmram_text; pDest != &_eccmram_text; pSource++, pDest++)
		*pDest = *pSource;

	for (pSource = &_siccmram_data, pDest = &_sccmram_data; pDest != &_eccmram_data; pSource++, pDest++)
		*pDest = *pSource;

	for (pDest = &_sccmram_bss; pDest != &_eccmram_bss; pDest++)
		*pDest = 0;

}

