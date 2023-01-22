#include "PCA9685_I2C.h"
#include <iostream>


//			| y		front
//			|	1___	 ___4
//			|		\___/	
//			|		|	|
//			|	2___| . |___5
//			|		|  \|________zero point (on the floor)
//			|		|___|
//			|	3___/	\___6
//			|	
//			|		 rear
//			|_____________________x


class Walking
{
public:
	void set_point(int x, int y, int z)
	{
		int point[3]{ x,y,z }; //point coords

		if (point[1] < 0)
		{

		}
		
		
		

			

	}

private:
	int len{}, width{}, hight{};
	int leg{};
};