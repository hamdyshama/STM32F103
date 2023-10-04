/*********************************************************************************/
/* Author    : Hamdy El Sayed                                                    */
/* Version   : V01                                                               */
/* Date      : 2 March 2023                                                      */
/*********************************************************************************/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H


/*   BASE_ADDRESS OF REGISTER OF NVIC*/
#define NVIC_BASE_ADDRESS  0xE000E100

/*   REGISTERS DEFINTIONS OF NVIC */
 
#define NVIC_ISER0     *((u32*)NVIC_BASE_ADDRESS)          /* Register Enable External Interrupts From 0 to 31   */
#define NVIC_ISER1     *((u32*)(NVIC_BASE_ADDRESS+0x004))  /* Register Enable External Interrupts From 32 to 63  */

#define NVIC_ICER0     *((u32*)(NVIC_BASE_ADDRESS+0x080))  /* Register Disable External Interrupts From 0 to 31  */
#define NVIC_ICER1     *((u32*)(NVIC_BASE_ADDRESS+0x084))  /* Register Disable External Interrupts From 0 to 31  */

#define NVIC_ISPR0     *((u32*)(NVIC_BASE_ADDRESS+0x100))  /* Register Set Pending Flag From 0 to 31     */
#define NVIC_ISPR1     *((u32*)(NVIC_BASE_ADDRESS+0x104))  /* Register Set Pending Flag From 32 to 63    */

#define NVIC_ICPR0     *((u32*)(NVIC_BASE_ADDRESS+0x180))  /* Register Clear Pending Flag From 0 to 31   */
#define NVIC_ICPR1     *((u32*)(NVIC_BASE_ADDRESS+0x184))  /* Register Clear Pending Flag From 32 to 63  */

#define NVIC_IABR0     *((volatile u32*)(NVIC_BASE_ADDRESS+0x200))  /* Register Active Bit Flag From 0  to 31   */
#define NVIC_IABR1     *((volatile u32*)(NVIC_BASE_ADDRESS+0x204))  /* Register Active Bit Flag From 32 to 63   */

#define NVIC_IPR       ((volatile u8*)NVIC_BASE_ADDRESS+0x300)
#define SCB_AIRCR      *((volatile u32*)(0xE000ED00+0x0C))

#define MNVIC_GROUP_4_SUB_0     0x05FA0300
#define MNVIC_GROUP_3_SUB_1     0x05FA0400
#define MNVIC_GROUP_2_SUB_2     0x05FA0500
#define MNVIC_GROUP_1_SUB_3     0x05FA0600
#define MNVIC_GROUP_0_SUB_4     0x05FA0700 




#endif


