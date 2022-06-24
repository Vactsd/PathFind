#include<iostream>
#include"PathFind.h"
#include"Map.h"
#include"Point.h"



int main()
{
	Map m;
	m.print();
	printf("\n\n\n======================================\n\n");
	
	Point tmp(0,0);

	Point one(2,1);
	Point newone(2,1);
	Point two(11,8);
	newone = one;
	

	for (int i = 0; i<30; i++)
	{
		tmp = PathFind(newone, two,m);
		newone = tmp;
		m.map[tmp.gety()][tmp.getx()] = '>';
		m.print();
		printf("\n\n\n======================================\n\n");

	}



	return 0;
}
