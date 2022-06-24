#pragma once
class Point
{
private:
	int x = 0;
	int y = 0;
public:
	Point(int x, int y);
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();
	bool operator==(Point b);
	bool operator!=(Point b);

};
