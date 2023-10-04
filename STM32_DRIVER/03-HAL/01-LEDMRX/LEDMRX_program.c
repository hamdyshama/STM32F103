/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 4 June 2023                                                       */
/*********************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "STK_interface.h"

#include "LEDMRXT_interface.h"
#include "LEDMRXT_private.h"
#include "LEDMRXT_config.h"

void HLEDMRX_voidInit(void)
{
MGPIO_VoidSetPinDirection(LEDMRX_ROW0_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW1_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW2_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW3_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW4_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW5_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW6_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_ROW7_PIN,OUTPUT_SPEED_2MHZ_PP);
						
MGPIO_VoidSetPinDirection(LEDMRX_COL0_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL1_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL2_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL3_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL4_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL5_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL6_PIN,OUTPUT_SPEED_2MHZ_PP);
MGPIO_VoidSetPinDirection(LEDMRX_COL7_PIN,OUTPUT_SPEED_2MHZ_PP);
						
    
    
    
    
}
void HLEDMRX_voidDisplay(u8 *Copy_u8Data )
{
    while(1)
    {
        /* Colum0 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[0]);
        MGPIO_voidSetPinValue(LEDMRX_COL0_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        
        /* Column 1 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[1]);
        MGPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        /* Column 2 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[2]);
        MGPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        /* Column 3 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[3]);
        MGPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        /* Column 4*/
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[4]);
        MGPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        /* Column 5*/
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[5]);
        MGPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        /* Column 6 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[6]);
        MGPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
        
        
        /* Column 7 */
        // Disable All Col
        void DisableAllCols();
        void SetRowValue(Copy_u8Data[7]);
        MGPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_LOW);
        MSTK_voidSetBusyWait(2500); //2.5 MSEC
    }
    
}


static DisableAllCols(void)
{
    // Disable All Col
    MGPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_HIGH);
    MGPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_HIGH);
    
    
}

// Set All  Rows
static SetRowValue(u8 Copy_u8Value)
{
    u8 Local_u8BIT;

    Local_u8BIT = GET_BIT(Copy_u8Value,0);
    MGPIO_voidSetPinValue(LEDMRX_ROW0_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,1);
    MGPIO_voidSetPinValue(LEDMRX_ROW1_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,2);
    MGPIO_voidSetPinValue(LEDMRX_ROW2_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,3);
    MGPIO_voidSetPinValue(LEDMRX_ROW3_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(CCopy_u8Value,4);
    MGPIO_voidSetPinValue(LEDMRX_ROW4_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,5);
    MGPIO_voidSetPinValue(LEDMRX_ROW5_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,6);
    MGPIO_voidSetPinValue(LEDMRX_ROW6_PIN,Local_u8BIT);
    
    Local_u8BIT = GET_BIT(Copy_u8Value,7);
    MGPIO_voidSetPinValue(LEDMRX_ROW7_PIN,Local_u8BIT);
    

}
