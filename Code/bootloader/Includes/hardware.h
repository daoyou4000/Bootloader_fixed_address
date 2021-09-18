//  File description: (Doxygen tags for automated documentation extraction)
//
//! \file hardware.h
//! \brief HW init
//
//****************************************************************************************************************************

//----------------------------------------------------------------------------------------------------------------------------
// 1) ALLOW MULTIPLE INCLUSION OF THIS HEADER FILE
//----------------------------------------------------------------------------------------------------------------------------
#ifndef HARDWARE_H
#define HARDWARE_H

//----------------------------------------------------------------------------------------------------------------------------
// 2) INCLUDE FILES: IT IS NOT RECOMMENDED TO INCLUDE OTHER .H FILES IN HEADER FILES (HERE)
//----------------------------------------------------------------------------------------------------------------------------
#include "stm32l431xx.h"

//----------------------------------------------------------------------------------------------------------------------------
// 3) DECLARATIONS OF GLOBAL DATA STRUCTURES AND ENUMS AND NEW TYPES
//----------------------------------------------------------------------------------------------------------------------------
#define MAIN_LOOP_DELAY 8000000

//----------------------------------------------------------------------------------------------------------------------------
// 4) EXTERN DECLARATIONS OF GLOBAL VARIABLES, ARRAYS AND STRUCTS
//----------------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------------
// 5) EXTERN DECLARATIONS OF GLOBAL FUNCTION PROTOTYPES
//----------------------------------------------------------------------------------------------------------------------------
void vInitSystemClock(void);
void vInitTaskTimer(void);
void vDeInitSystemClock(void);

#endif // HARDWARE_H

// EOF, no more