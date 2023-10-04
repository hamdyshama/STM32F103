/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 22 March 2023                                                     */
/*********************************************************************************/

#ifndef EXIT_INTERFACE_H
#define EXIT_INTERFACE_H


/* line and mo0de */
void MEXTI_voidInit();
void MEXTI_voidEnableExti(u8 Copy_u8EXTILine);
void MEXTI_voidDisableExti(u8 Copy_u8EXTILine);
void MEXTI_voidSwTrigger(u8 Copy_u8EXTILine);
void MEXTI_voidSetSignalLatch(u8 Copy_u8EXTILine,Copy_u8EXTMode);






#endif