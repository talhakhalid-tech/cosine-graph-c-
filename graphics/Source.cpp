#include<iostream>
#include<Windows.h>
#include<math.h>
using namespace std;
int main()
{
	HWND myConsole= GetConsoleWindow();
	HDC mdc = GetDC(myConsole);
	int cosine;
	int pixel = 0;
	COLORREF color =  RGB(123,222,013);
	for(float i=0;i<3.14*4;i+=0.05){
		cosine=50+25*cos(i);
		SetPixel(mdc,pixel,cosine,color);
		pixel++;
	}
	ReleaseDC(myConsole,mdc);
	cin.ignore();
	system("pause");
	return 0;
}