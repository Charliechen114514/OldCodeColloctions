#include "Timer0.h"
#include "lcd1602.h"
#include <REGX51.H>
#include "Key.h"
#include "showTime.h"
#define KEY_DEF 0
#define MOVE 0
#define SUSPEND 1
#define RESUME 2
#define RESET 3
typedef struct _TimeBuf_{
	unsigned char second;
	unsigned char minute;
	unsigned char hours;
	unsigned char isSupposeTerminate; 
}TimeBuf;

TimeBuf time = {0, 0, 0, 0};

static unsigned char keyNum = KEY_DEF;

void main()
{
	
	Timer0_Init();
	LCD_Init();
	
	LCD_ShowString(1,1,"Timer HERE");
	LCD_ShowString(2,1,"  :  :  ");
	while(1){
		keyNum = Key();
		switch(keyNum)
		{
			case SUSPEND:
				time.isSupposeTerminate = 1;
			break;
			case RESUME:
				time.isSupposeTerminate = 0;
			break;
			case RESET:
				time.second = 0;
				time.hours = 0;
				time.minute = 0;
			case MOVE:  // fall through in C++
			default:
				showTime(time.second, time.minute, time.hours);
				
				break;
		
		}
	}
}

void timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	/* �������жϣ�������Ҫ�������üĴ�����ֵ���������ٴ�ѭ�� */
	TL0 = 0x18;				//���ö�ʱ��ʼֵ
	TH0 = 0xFC;				//���ö�ʱ��ʼֵ
	T0Count++;
	if(T0Count >= 1000)
	{
		
		T0Count = 0;
		if(time.isSupposeTerminate == 1)
		{
			return;
		}
		time.second++;
		if(time.second >= 60)
		{
			time.second = 0;
			time.minute++;
			if(time.minute >= 60)
			{
				time.minute = 0;
				time.hours++;
				if(time.hours >=24)
				{
					time.hours = 0;
				}
			}
		}
	}
}
