#include <iostream>
#include "graphicsmanager.h"	

//ignore this!!
Room* room;
Robot* Robby;
GraphicsManager* picture;

int main()
{
	//declare the room, robby and picture objects here
	room = new room(7);
	robby = new robot();
	picture = new graphicsmanager(room, robby);

	while (true)
	{

		if (robby->ahead_is_colour(room, "green")) {
			robby->move();
			picture->draw();
			break;
		}


		if (robby->ahead_is_colour(room, "yellow"))
		{
			robby->move();
			picture->draw();
		}
		
		else if (robby->ahead_is_colour(room, "blue") || robby->ahead_is_colour(room, "black"))
		{
			robby->left();
			for (int i = 0; i < 6; i++)
			{
				robby->move();
				picture->draw();
			}
			robby->right(); 
			robby->move();
			robby->draw();
			robby->move();
			robby->draw();
			robby->right();


			if (robby->ahead_is_colour(room, "blue") || robby->ahead_is_colour(room, "black"))
			{
				robby->left();
				robby->left();
				picture->draw();
			}

		}
		else {
			robby->left();
			picture->draw();
		}
	}

	//we need system pause so that we can see where robby ends up
	/*system("pause");*/
//}