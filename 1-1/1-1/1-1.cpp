// 1-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "rectangle.h"
#include <time.h>

;using namespace std;
const unsigned int SIZE=10;

int _tmain(int argc, _TCHAR* argv[])
{
	srand (time (0));
	setlocale(LC_ALL, "Rus");
	rectangle Rect[SIZE]; 
	for (int i=0;i<SIZE; i++)
	{
		Rect[i].print();
	}
	cout<<"���������� ���������=";
	int count = 0, maxSs = 0, maxSp = 0, maxPp = 0, maxPs = 0, 
		number = 0, number1 = 0, number2 = 0, number3 = 0;
	for (int i=0; i<SIZE; i++)
	{
		if(Rect[i].Type() == 0)
		{
			count++;
			if (maxSs < Rect[i].S()) 
			{
				maxSs = Rect[i].S(); 
				number = i;
			}
		
			if (maxSp < Rect[i].P())
			 {	
					maxSp = Rect[i].P();
					number1 = i;
			 }
		}
		else 
		{
			if (maxPs < Rect[i].S()) 
			{
				maxPs = Rect[i].S(); 
				number2 = i;
			}
		
			if (maxPp < Rect[i].P())
			{	
				maxPp = Rect[i].P();
				number3 = i;
			}
		}
	}
	cout<<count<<endl;
	cout<<"���������� ���������������="<<SIZE-count<<endl;
	if (count > 0)
	{
		cout<<"�����������  ������� ��������="<<maxSs<<endl;
		Rect[number].print();
		cout<<"������������ �������� ��������="<<maxSp<<endl;
		Rect[number1].print();
	}
	if (count != SIZE)
	{
		cout<<"������������ ������� ��������������="<<maxPs<<endl;
		Rect[number2].print();
		cout<<"������������ �������� ��������������="<<maxPp<<endl;
		Rect[number3].print();
	}
	return 0;
}

