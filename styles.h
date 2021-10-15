#ifndef STYLES_H
#define STYLES_H 1

#include <string>
#include "styleAttribute.h"
#include <vector>

using namespace std;

class Style
{
private:
	StyleAttribute textColor;
	StyleAttribute textWeight;
	StyleAttribute backgroundColor;
	StyleAttribute isBlink;
	StyleAttribute border;
	bool reset = true;
	StyleAttribute defaultColors[16];
	
public:
	Style();
	Style(const Style& cp);
	~Style()
	{
		
	}
	string getASCII();
	void setTextColor(int r, int g, int b);
	void setTextColor(int set);
	void setBackgroundColor(int r, int g, int b);
	void setBackgroundColor(int set);
	void turnOnBlink();
	void turnOffBlink();
	void turnOnFastBlink();
	void setBorderBox();
	void noBorder();
	void setBorderCircle();
	bool isEqual(Style& cp);
	

};








#endif