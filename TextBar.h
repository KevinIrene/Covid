#pragma once
#include "CubeType.h"
#include"Simulator.h"
class TextBar
{
public:
	TextBar(vector<wstring>a, vector<int>b, vector<point>c, vector<RGBData>d,MapInfo info);
	~TextBar();
	vector<wstring> textlist;
	vector<int> textsize;
	vector<point> points;
	vector<RGBData> rgbdatas;
	MapInfo Info;
	void SetTextbar(vector<wstring>a, vector<int>b, vector<point>c, vector<RGBData>d, MapInfo info);
private:

};

