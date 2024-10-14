//#include <iostream>
//#include "GraphicsManager.h"	
//
////Ignore this!!
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
////
//
//int main()
//{
//	//declare the room, robby and picture objects here
//	room = new Room(5);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//
//
//	robby->move();
//	picture->draw();
//
//
//	while (true)
//	{
//		if (robby->ahead_is_colour(room, "yellow"))
//		{
//			robby->move();
//			picture->draw();
//		}
//		else if (robby->ahead_is_colour(room, "green")) {
//			robby->move();
//			picture->draw();
//			break;
//		}
//		else 
//		{
//			robby->right();
//		}
//
//	}
//
//
//	//we need system pause so that we can see where robby ends up
//	system("Pause");
//}