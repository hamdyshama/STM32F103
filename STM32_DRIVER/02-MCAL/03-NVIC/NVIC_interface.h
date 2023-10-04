/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 2 March 2023                                                      */
/*********************************************************************************/

#ifndef  NVIC_INTERFACE_H
#define  NVIC_INTERFACE_H

void MNVIC_voidEnableInterrupt  (u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber);
u8	 MNVIC_u8GetActiveFlag      (u8 Copy_u8IntNumber);
void MNVIC_voidSetPriority(u8 Copy_PeripheralIdx, u8 Copy_u8Priority);
void MNVIC_voidInit(void);
//void MNVIC_voidSetPriority(s8 Copy_s8IntID,u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority,u32 Copy_u32Group );




 
#define GROUP3  0x05FA0300    // 4 Bits for Group (IPR) => group
#define GROUP4  0x05FA0400    // 3 Bits for Group and 1 Bit for Sub group 
#define GROUP5  0x05FA0500    // 2 Bits for Group and 2 Bit for Sub group
#define GROUP6  0x05FA0600    // 1 Bits for Group and 3 Bit for Sub group
#define GROUP7  0x05FA0700    // 0 Bits for Group and 4 Bit for Sub group



#endif
