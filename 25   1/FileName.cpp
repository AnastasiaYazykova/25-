#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include "FileName.h"
#include <tchar.h>
#include <stdio.h>

void Image1(HDC hdc, int cx, int cy, int size) {
	HPEN hPen;
	hPen = CreatePen(PS_SOLID, 1, RGB(100, 0, 155));
	SelectObject(hdc, hPen);

	///MoveToEx(hdc, cx, cy - size, NULL);//триугольник
	///LineTo(hdc, cx + size, cy + size);
	///LineTo(hdc, cx - size, cy + size);
	///LineTo(hdc, cx, cy - size);
	



	////////////////////////////////////////ромб
	//MoveToEx(hdc, cx, cy - size, NULL);
	//LineTo(hdc, cx + size,cy);
	//LineTo(hdc, cx, cy+size);
	//LineTo(hdc, cx-size, cy);
	//LineTo(hdc, cx, cy - size);




		
		
	//////////////////////////////////////////////////////////часы
		//MoveToEx(hdc, cx - size / 2 , cy - size , NULL);
		//LineTo(hdc, cx + size / 2, cy - size);
		//LineTo(hdc, cx - size, cy + size);
		///LineTo(hdc, cx + size, cy + size);
		///LineTo(hdc, cx - size / 2 , cy - size);
		///DeleteObject(hPen);
	



	////////////////////////////////////////////звезда
	MoveToEx(hdc, cx, cy - size, NULL);
	LineTo(hdc, cx+size/4, cy - size/4);
	LineTo(hdc, cx+size, cy );
	LineTo(hdc, cx + size / 4, cy + size / 4);
	LineTo(hdc, cx, cy + size);
	LineTo(hdc, cx - size / 4, cy + size / 4);
	LineTo(hdc, cx-size, cy);
	LineTo(hdc, cx - size / 4, cy - size / 4);
	LineTo(hdc, cx, cy - size);






	DeleteObject(hPen);
}
void RecursiveImage1_1(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 20) {
		return;
	}
	RecursiveImage1_1(hdc, cx - size, cy - size, size / 2);
}
void RecursiveImage1_2(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage1_2(hdc, cx - size, cy, size / 2);
	RecursiveImage1_2(hdc, cx, cy - size, size / 2);
	RecursiveImage1_2(hdc, cx + size, cy, size / 2);
	RecursiveImage1_2(hdc, cx, cy + size, size / 2);
}
void RecursiveImage1_3(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage1_3(hdc, cx - size, cy, size / 2);
	RecursiveImage1_3(hdc, cx + size, cy, size / 2);
}
void RecursiveImage1_4(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}

	RecursiveImage1_4(hdc, cx, cy - size, size / 2);
}
void RecursiveImage1_5(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage1_5(hdc, cx - size, cy, size / 2);
	RecursiveImage1_5(hdc, cx, cy - size, size / 2);
}
void RecursiveImage1_6(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage1_6(hdc, cx - size, cy, size / 2);
	RecursiveImage1_6(hdc, cx, cy - size, size / 2);
	RecursiveImage1_6(hdc, cx + size, cy, size / 2);
}
void RecursiveImage7(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage7(hdc, cx , cy - size, size / 2);
	RecursiveImage7(hdc, cx , cy + size, size / 2);
}


void RecursiveImage8(HDC hdc, int cx, int cy, int size) {
	Image1(hdc, cx, cy, size);
	if (size < 10) {
		return;
	}
	RecursiveImage8(hdc, cx , cy + size, size / 2);
	RecursiveImage8(hdc, cx- size, cy , size / 2);
	RecursiveImage8(hdc, cx + size, cy , size / 2);
}

