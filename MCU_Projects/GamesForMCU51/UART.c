#include "UART.h"

void InitUART()
{
#if Enable_UCPT
	
	PCON &= 0x7F;		//�����ʲ�����
	SCON = 0x50;		//8λ����,�ɱ䲨����
	TMOD &= 0x0F;		//���ö�ʱ��ģʽ
	TMOD |= 0x20;		//���ö�ʱ��ģʽ
	TL1 = 0xFA;			//���ö�ʱ��ʼֵ
	TH1 = 0xFA;			//���ö�ʱ����ֵ
	ET1 = 0;			//��ֹ��ʱ���ж�
	TR1 = 1;			//��ʱ��1��ʼ��ʱ
	//�����ж�
	EA=1;	//���жϿ���
	ES=1;	//�����ж�
#endif
}

void UART_OperatePlayer(struct Player* player, Instruction Buf)
{
#if Enable_UCPT
	switch(Buf)
	{
		case MOVE_UP:
			moveUp(player);break;
		case MOVE_DOWN:
			moveDown(player);break;
		case MOVE_LEFT:
			moveLeft(player);break;
		case MOVE_RIGHT:
			moveRight(player);break;
		default:break;
	}
#endif
}

