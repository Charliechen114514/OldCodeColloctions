#include "MatKey.h"
#include "Utilitys.h"
#include "DigitalLED.h"

static unsigned char curChoice;
unsigned char CheckPulse()
{
	unsigned int temp;
	P1 = 0x0f;
	temp = P1;						//��P3 = 1111 1110������ɨ���һ��
	temp = temp & 0x0f;	
	
	//����Ƿ��а�������ȥ��
	if(temp != 0x0f){
		// BeepHigh;//����һ����������ȥ����P3 = 11101110 ��ʱtemp = 1110000 != 0xf0;
		
		temp = P1;					//��ʱ�����¸�ֵ
		temp = temp & 0x0f;
		if(temp == 0x0e)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

unsigned char isExitMatKeyMenu()
{
	unsigned int temp;
	P1 = 0x0f;
	temp = P1;						//��P3 = 1111 1110������ɨ���һ��
	temp = temp & 0xe0;	
	
	//����Ƿ��а�������ȥ��
	if(temp != 0xe0){
		// BeepHigh;//����һ����������ȥ����P3 = 11101110 ��ʱtemp = 1110000 != 0xf0;
		
		temp = P1;					//��ʱ�����¸�ֵ
		temp = temp & 0x0f;
		if(temp == 0x0e)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Pulse()
{
	unsigned char state, stopState;
	state = 0;
	stopState = 1;
	while(stopState)
	{
		state = CheckPulse();
		if(state == 1)
		{
			break;
		}
	}
}

