#include <stdio.h>
#include "STD_TYPES.h"
s32 MAP(s32 InputRangeMin,s32 InputRangeMax,s32 OutputRangeMin,s32 OutputRangeMax,s32 InputValue)
{
    s32 Local_s32OutputValue;

    Local_s32OutputValue=(( ( OutputRangeMax - OutputRangeMin ) * ( InputValue - InputRangeMin) )/
	( InputRangeMax - InputRangeMin) )+OutputRangeMin;

    return Local_s32OutputValue;
}
