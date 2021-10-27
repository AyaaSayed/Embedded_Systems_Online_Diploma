#include "Platform_Types.h"

#define SET_BIT(ADDRESS,BIT)    ((ADDRESS) |= (1UL << (BIT)))
#define RESET_BIT(ADDRESS,BIT)  ((ADDRESS) &= ~(1UL << (BIT)))
#define TOGGLE_BIT(ADDRESS,BIT) ((ADDRESS) ^= (1UL << (BIT)))
#define READ_BIT(ADDRESS,BIT)   ((ADDRESS) & (1UL << (BIT)))


#define GPIO_PORTA 0x40010800
#define BASE_RCC   0x40021000

#define APB2ENR   *(volatile uint32 *)(BASE_RCC + 0x18)

#define GPIOA_CRL *(volatile uint32 *)(GPIO_PORTA + 0x00)
#define GPIOA_CRH *(volatile uint32 *)(GPIO_PORTA + 0X04)
#define GPIOA_IDR *(volatile uint32 *)(GPIO_PORTA + 0x08)
#define GPIOA_ODR *(volatile uint32 *)(GPIO_PORTA + 0x0C)


void Delay(int nCount);
int getPressureVal();
void Set_Alarm_actuator(int i);
void GPIO_INITIALIZATION ();
