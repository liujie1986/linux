#include "string_conv.h"

UINT8 asc_hex(UINT8 *asc, UINT8 *hex, UINT64 len)
{
	int i;
	UINT8 tempstr[2];

	if(!asc || !hex)
	{
		return 0;
	}

	memset(hex, 0, len);

	for(i = 0; i < len; i++)
	{
		memcpy(tempstr, asc + i * 2, 2);
		*hex++ = (UINT8)(strtol(tempstr, NULL, 16));
	}	

	return 0;
}

UINT8 hex_asc(UINT8 *hex, UINT8 *asc, UINT64 len)
{
	int i;

	if(!asc || !hex)
	{
		return 0;
	}

	memset(asc, 0, len * 2);
	
	for(i = 0; i < len; i++)
	{
		sprintf(asc + i * 2, "%02X", *hex++);
	}

	return 0;
}