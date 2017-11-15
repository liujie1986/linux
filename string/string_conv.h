#ifndef 	__STIRNG_CONV__H
#define		__STIRNG_CONV__H

#include "plat_def.h"

UINT8 asc_hex(UINT8 *asc, UINT8 *hex, UINT64 pair_len);
UINT8 hex_asc(UINT8 *hex, UINT8 *asc, UINT64 len);

#endif