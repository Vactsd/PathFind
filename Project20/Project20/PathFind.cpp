#include<iostream>
#include<algorithm>
#include<list>
#include"PathFind.h"
#include"Map.h"
#include"Point.h"


Point PathFind(Point one, Point two, Map m)
{
	Point tmp = one;
	one = two;
	two = tmp;
	using namespace std;
	auto _startposition = one;
	list <Point> _openList;
	list <Point> _closedList;

	_openList.push_front(_startposition);
	_closedList.push_front(_startposition);

	while (_openList.size() > 0)
	{
		Point currenposition = _openList.back();
		_openList.pop_back();

		for (int x = -1; x <= 1; x++)
		{
			for (int y = -1; y <= 1; y++)
			{
				if (x != 0 && y != 0)
					continue;
				Point researchedPoint = currenposition;
				researchedPoint.setx(currenposition.getx() + x);
				researchedPoint.sety(currenposition.gety() + y);

				if(researchedPoint.gety()<0 || researchedPoint.getx() < 0 || researchedPoint.getx() >12 || researchedPoint.gety() > 9)
					continue;

				if (m.map[researchedPoint.gety()][researchedPoint.getx()] == 'c')
					continue;

				auto res = std::find(_closedList.begin(), _closedList.end(), researchedPoint);
				if (res==_closedList.end())
				{
					//not found
				}
				else
				{
					continue;
				}

				if (researchedPoint.getx() == two.getx() && researchedPoint.gety() == two.gety())
				{
					return currenposition;
				}

				_openList.push_front(researchedPoint);
				_closedList.push_front(researchedPoint);


			}

		}


	}
	return one;

}





