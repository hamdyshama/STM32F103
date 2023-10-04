




#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"STK_interface.h"
#include"OS_interface.h"
#include"OS_private.h"
#include"OS_config.h"

#define NULL    (void *)0
/* Array of Tasks " Array of structure  "  */

Static Task OS_Tasks [NUMBER_TASKS] ={NULL};

void OS_voidCreateTask(u8 Copy_u8Id , u16 Copy_u16Priodicity ,void (*ptr) (void))
{
    
    OS_Tasks[Copy_u8Id].priodicity =Copy_u16Priodicity ;
    OS_Tasks[Copy_u8Id].Fptr =ptr ;
   
    
}

void OS_voidStart(void)
{
    /*Intialization */
    MSTK_voidInit();
    /** Tick---> 1 msec    **/
    // HSE 8Mhz /8 ==> 1000 Micro sec ====> 1 msec
    MSTK_voidSetIntervalPeriodic(1000,Scheduler);
    
    
    
}

volatile u16 Copy_u16TickCounts =0;

void Scheduler (void )
{
        
    for(u8 i=0;i<NUMBER_TASKS;i++)
    {
        if(TickCounts % OS_Tasks[i].priodicity)==0)
        {
            OS_Tasks[i].Fptr();
        }
            
    }
    
     Copy_u16TickCounts ++;
           
           
}













