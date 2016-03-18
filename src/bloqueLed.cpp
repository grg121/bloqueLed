#include<iostream>
#include <bloqueLed.h>
using namespace std;

void on(bloqueLed &b, int pos)
{
	unsigned char mask=1;
	mask=mask<<pos
	b=b|mask;
}

void off(bloqueLed &b, int pos)
{
	unsigned char mask=1;
	mask=mask<<pos;//pones el uno en la posicion que queramos
	mask=~mask;//luego lo negamos
	b&=mask;//le hago la operacion and --> es lo mismo  b=b&mask;
}

bool get(bloqueLed b, int pos)
{
	unsigned char mask=1;
	mask=mask<<pos;//pongo un uno en la posicion requerida
	b&=mask;//le hago un and 
	return (b!=0);//si hay alguno que es uno, es pk el led que hemos consultado esta encendido
	
}
void encender(bloqueLed &b)
{
	unsigned char mask=0xFF;
	b|=mask;//convertimos todos a 1 osea encendidos
}

void apagar(bloqueLed &b)
{
	unsigned char mask=0;
	b&=mask;
}

void asignar(bloqueLed &b, const bool v[])
{
	unsigned char mask=0;
	b=mask; //b=0; es lo mismo y nos ahorramos las mascara
	for(int i = 0 ; i<8 ; i++)
	{
		if(v[i])
		{
			on(b,7-i);
		}
	}
}

void volcar(bloqueLed b, bool v[])
{
	for(int i=0 ; i<8 ; i++)
	{
		v[i]=get(b,7-i);		//if(get(b,7-i))
	}					//{
}						//	v[i]=ge;
						//}
						//else
						//	v[i]=FALSE;
			
void encendidos(bloqueLed b, int posic[], int &cuantos)
{
	for(int i=0 ; i<8 ; i++)
	{
		
	}
}		
		

