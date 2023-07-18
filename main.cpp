//19L-2250 M.Junaid
//19L - 2258 M.Saad
#pragma warning(disable :4996)
#include"graphics.h"
#include"iostream"
#include"string.h"
#include"cstdlib"
#include"ctime"
#include"time.h"
using namespace std;
void board();
int jump(int q);
int fall(int q);
bool game();
void board()
{
	initwindow(1000, 1000);
	//################################################################//
	//BOARD OF 5X6	


	line(100, 100, 700, 100);
	line(100, 200, 700, 200);
	line(100, 300, 700, 300);
	line(100, 400, 700, 400);
	line(100, 500, 700, 500);
	line(100, 600, 700, 600);

	line(100, 100, 100, 600);
	line(200, 100, 200, 600);
	line(300, 100, 300, 600);
	line(400, 100, 400, 600);
	line(500, 100, 500, 600);
	line(600, 100, 600, 600);
	line(700, 100, 700, 600);





	//################################################################..

   //NUMBERING

	outtextxy(150, 150, "25");
	outtextxy(250, 150, "26");
	outtextxy(350, 150, "27");
	outtextxy(450, 150, "28");
	outtextxy(550, 150, "29");
	outtextxy(650, 150, "30");

	outtextxy(150, 250, "24");
	outtextxy(250, 250, "23");
	outtextxy(350, 250, "22");
	outtextxy(450, 250, "21");
	outtextxy(550, 250, "20");
	outtextxy(650, 250, "19");

	outtextxy(150, 350, "13");
	outtextxy(250, 350, "14");
	outtextxy(350, 350, "15");
	outtextxy(450, 350, "16");
	outtextxy(550, 350, "17");
	outtextxy(650, 350, "18");

	outtextxy(150, 450, "12");
	outtextxy(250, 450, "11");
	outtextxy(350, 450, "10");
	outtextxy(450, 450, "9");
	outtextxy(550, 450, "8");
	outtextxy(650, 450, "7");

	outtextxy(150, 550, "1");
	outtextxy(250, 550, "2");
	outtextxy(350, 550, "3");
	outtextxy(450, 550, "4");
	outtextxy(550, 550, "5");
	outtextxy(650, 550, "6");
	//##############################################################//
	///COLOURING TO BOXES
	setfillstyle(SOLID_FILL, RED);
	floodfill(150, 250, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(250, 150, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(250, 350, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(250, 550, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(150, 450, WHITE);



	setfillstyle(SOLID_FILL, RED);
	floodfill(350, 250, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(350, 450, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(450, 150, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(450, 350, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(450, 550, WHITE);



	setfillstyle(SOLID_FILL, RED);
	floodfill(550, 250, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(550, 450, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(650, 150, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(650, 350, WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(650, 550, WHITE);

	setfillstyle(SOLID_FILL, GREEN);
	floodfill(150, 150, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(150, 350, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(150, 550, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(250, 250, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(250, 450, WHITE);

	setfillstyle(SOLID_FILL, GREEN);
	floodfill(350, 150, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(350, 350, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(350, 550, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(450, 250, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(450, 450, WHITE);

	setfillstyle(SOLID_FILL, GREEN);
	floodfill(550, 150, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(550, 350, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(550, 550, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(650, 250, WHITE);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(650, 450, WHITE);



	//######################################################################//

	//LADDER FROM !! TO 26
	line(240, 150, 240, 450);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(200, 300, WHITE);
	line(235, 150, 235, 450);

	line(285, 150, 285, 450);
	line(280, 150, 280, 450);

	line(285, 150, 280, 150);
	line(285, 450, 280, 450);

	line(240, 150, 235, 150);
	line(235, 450, 240, 450);


	line(240, 170, 280, 170);
	line(240, 175, 280, 175);

	line(240, 199, 280, 199);
	line(240, 204, 280, 204);

	line(240, 225, 280, 225);
	line(240, 230, 280, 230);


	line(240, 150, 240, 450);
	line(235, 150, 235, 450);

	line(285, 150, 285, 450);
	line(280, 150, 280, 450);

	line(285, 150, 280, 150);
	line(285, 450, 280, 450);

	line(240, 150, 235, 150);
	line(235, 450, 240, 450);


	line(240, 170, 280, 170);
	line(240, 175, 280, 175);

	line(240, 199, 280, 199);
	line(240, 204, 280, 204);

	line(240, 225, 280, 225);
	line(240, 230, 280, 230);



	line(240, 150, 240, 450);
	line(235, 150, 235, 450);

	line(285, 150, 285, 450);
	line(280, 150, 280, 450);

	line(285, 150, 280, 150);
	line(285, 450, 280, 450);

	line(240, 150, 235, 150);
	line(235, 450, 240, 450);


	line(240, 170, 280, 170);
	line(240, 175, 280, 175);

	line(240, 199, 280, 199);
	line(240, 204, 280, 204);

	line(240, 225, 280, 225);
	line(240, 230, 280, 230);

	line(240, 255, 280, 255);
	line(240, 250, 280, 250);

	//line(240, 285, 280, 285);
	//line(240, 290, 280, 290);

	line(240, 315, 280, 315);
	line(240, 320, 280, 320);

	line(240, 335, 280, 335);
	line(240, 340, 280, 340);

	line(240, 265, 280, 265);
	line(240, 270, 280, 270);

	line(240, 295, 280, 295);
	line(240, 300, 280, 300);

	line(240, 435, 280, 435);
	line(240, 430, 280, 430);

	line(240, 390, 280, 390);
	line(240, 385, 280, 385);




	//########################################################################################//

	//Ladder2


	line(340, 250, 340, 550);
	line(335, 250, 335, 550);

	line(385, 250, 385, 550);
	line(380, 250, 380, 550);

	line(385, 250, 380, 250);
	line(385, 550, 380, 550);

	line(340, 250, 335, 250);
	line(335, 550, 340, 550);


	line(340, 270, 380, 270);
	line(340, 275, 380, 275);

	line(340, 299, 380, 299);
	line(340, 304, 380, 304);

	line(340, 325, 380, 325);
	line(340, 330, 380, 330);


	line(340, 250, 340, 550);
	line(335, 250, 335, 550);

	line(385, 250, 385, 550);
	line(380, 250, 380, 550);

	line(385, 250, 380, 250);
	line(385, 550, 380, 550);

	line(340, 250, 335, 250);
	line(335, 550, 340, 550);


	line(340, 270, 380, 270);
	line(340, 275, 380, 275);

	line(340, 299, 380, 299);
	line(340, 304, 380, 304);

	line(340, 325, 380, 325);
	line(340, 330, 380, 330);



	line(340, 250, 340, 550);
	line(335, 250, 335, 550);

	line(385, 250, 385, 550);
	line(380, 250, 380, 550);

	line(385, 250, 380, 250);
	line(385, 550, 380, 550);

	line(340, 250, 335, 250);
	line(335, 550, 340, 550);


	line(340, 270, 380, 270);
	line(340, 275, 380, 275);

	line(340, 299, 380, 299);
	line(340, 304, 380, 304);

	line(340, 325, 380, 325);
	line(340, 330, 380, 330);

	line(340, 355, 380, 355);
	line(340, 350, 380, 350);

	//line(240, 285, 280, 285);
	//line(240, 290, 280, 290);

	line(340, 415, 380, 415);
	line(340, 420, 380, 420);

	line(340, 435, 380, 435);
	line(340, 440, 380, 440);

	line(340, 365, 380, 365);
	line(340, 370, 380, 370);

	line(340, 395, 380, 395);
	line(340, 400, 380, 400);

	line(340, 535, 380, 535);
	line(340, 530, 380, 530);

	line(340, 490, 380, 490);
	line(340, 485, 380, 485);

	//#################################################################################//
	//LADDER3



	line(540, 150, 540, 250);
	line(535, 150, 535, 250);

	line(585, 150, 585, 250);
	line(580, 150, 580, 250);

	line(540, 150, 535, 150);
	line(540, 250, 535, 250);


	line(580, 150, 585, 150);
	line(580, 250, 585, 250);


	line(540, 170, 580, 170);
	line(540, 165, 580, 165);

	line(540, 190, 580, 190);
	line(540, 195, 580, 195);


	line(540, 210, 580, 210);
	line(540, 215, 580, 215);

	line(540, 235, 580, 235);
	line(540, 240, 580, 240);



	//line(585, 150, 580, 250);


	//###############################################################################//

	//Ladder4



	line(540, 450, 540, 550);
	line(535, 450, 535, 550);

	line(585, 450, 585, 550);
	line(580, 450, 580, 550);

	line(540, 450, 535, 450);
	line(540, 550, 535, 550);


	line(580, 450, 585, 450);
	line(580, 550, 585, 550);


	line(540, 470, 580, 470);
	line(540, 465, 580, 465);

	line(540, 490, 580, 490);
	line(540, 495, 580, 495);


	line(540, 510, 580, 510);
	line(540, 515, 580, 515);

	line(540, 535, 580, 535);
	line(540, 540, 580, 540);

	//SNAKES
	//Snake from 21 t0 9
	arc(450, 350, 100, 260, 90);
	arc(430, 350, 90, 270, 90);
	//Snake last jo reh gya
	arc(650, 350, 100, 260, 90);
	arc(630, 350, 90, 270, 90);

	circle(450, 260, 3);
	circle(630, 260, 4);


	//SNAKE FROM 1 to 27
	arc(150, 400, 270, 40, 150);
	arc(130, 400, 270, 40, 150);
	arc(350, 250, 90, 180, 120);
	arc(370, 250, 90, 180, 120);
	line(230, 240, 243, 305);
	line(250, 240, 263, 305);

	circle(350, 130, 5);
	//
	arc(550, 450, 90, 180, 100);
	arc(570, 450, 90, 180, 100);

	arc(350, 450, 300, 0, 100);
	arc(370, 450, 290, 0, 100);

}


int jump(int q)
{
	if (q == 3)
	{
		cout << "You have jumped from " << q;
		q = 22;
		cout << " to " << q << " \n";
	}
	else if (q == 5)
	{
		cout << "You have jumped from " << q;
		q = 8;
		cout << " to " << q << " \n";
	}
	else if (q == 11)
	{
		cout << "You have jumped from " << q;
		q = 26;
		cout << " to " << q << " \n";
	}
	else if (q == 20)
	{
		cout << "You have jumped from " << q;
		q = 29;
		cout << " to " << q << " \n";
	}
	return q;
}



int fall(int q)
{
	if (q == 17)
	{
		cout << "You have fallen from " << q;
		q = 4;
		cout << " to " << q << " \n";
	}
	else if (q == 19)
	{
		cout << "You have fallen from " << q;
		q = 7;
		cout << " to " << q << " \n";
	}
	else if (q == 21)
	{
		cout << "You have fallen from " << q;
		q = 9;
		cout << " to " << q << " \n";
	}
	else if (q == 27)
	{
		cout << "You have fallen from " << q;
		q = 1;
		cout << " to " << q << " \n";
	}
	return q;
}

bool game()
{
	int srand = time(NULL);
	int n1 = 0, n2 = 0;

	static int t1 = 0, t2 = 0, t = 0;
	if (t % 2 == 0)
	{
		cout << "Player One Turn: ";
		system("pause");
		n1 = rand() % 6 + 1;
		t1 = t1 + n1;



		if (t1 == 1)
		{
			circle(150, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(151, 551, WHITE);
		}
		if (t1 == 2)
		{
			circle(250, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(251, 551, WHITE);
		}
		if (t1 == 3)
		{
			circle(350, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(351, 551, WHITE);
		}
		if (t1 == 4)
		{
			circle(450, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(451, 551, WHITE);
		}
		if (t1 == 5)
		{
			circle(550, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(551, 551, WHITE);
		}
		if (t1 == 6)
		{
			circle(650, 550, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(651, 551, WHITE);
		}
		if (t1 == 12)
		{
			circle(150, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(151, 451, WHITE);
		}
		if (t1 == 11)
		{
			circle(250, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(251, 451, WHITE);
		}
		if (t1 == 10)
		{
			circle(350, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(351, 451, WHITE);
		}
		if (t1 == 9)
		{
			circle(450, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(451, 451, WHITE);
		}
		if (t1 == 8)
		{
			circle(550, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(551, 451, WHITE);
		}
		if (t1 == 7)
		{
			circle(650, 450, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(651, 451, WHITE);
		}
		if (t1 == 13)
		{
			circle(150, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(151, 351, WHITE);
		}
		if (t1 == 14)
		{
			circle(250, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(251, 351, WHITE);
		}
		if (t1 == 15)
		{
			circle(350, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(351, 351, WHITE);
		}
		if (t1 == 16)
		{
			circle(450, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(451, 351, WHITE);
		}
		if (t1 == 17)
		{
			circle(550, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(551, 351, WHITE);
		}
		if (t1 == 18)
		{
			circle(650, 350, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(651, 351, WHITE);
		}
		if (t1 == 24)
		{
			circle(150, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(151, 251, WHITE);
		}
		if (t1 == 23)
		{
			circle(250, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(251, 251, WHITE);
		}
		if (t1 == 22)
		{
			circle(350, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(351, 251, WHITE);
		}
		if (t1 == 21)
		{
			circle(450, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(451, 251, WHITE);
		}
		if (t1 == 20)
		{
			circle(550, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(551, 251, WHITE);
		}
		if (t1 == 19)
		{
			circle(650, 250, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(651, 251, WHITE);
		}
		if (t1 == 25)
		{
			circle(150, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(151, 151, WHITE);
		}
		if (t1 == 26)
		{
			circle(250, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(251, 151, WHITE);
		}
		if (t1 == 27)
		{
			circle(350, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(351, 151, WHITE);
		}
		if (t1 == 28)
		{
			circle(450, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(451, 351, WHITE);
		}
		if (t1 == 29)
		{
			circle(550, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(551, 351, WHITE);
		}
		if (t1 == 30)
		{
			circle(650, 150, 10);
			setfillstyle(SOLID_FILL, YELLOW);
			floodfill(651, 151, WHITE);
		}


		if (t1 == 30)
		{
			cout << "Your Dice Score is " << n1 << " and Player One Won\n";
			return false;
		}
		else if (t1 > 30)
		{
			t1 = t1 - n1;
			cout << "Your Dice Score is " << n1 << " and You Cann't Run.Player One is on " << t1 << "\n\n";
		}
		else if (t1 < 30)
		{
			if (t1 == 3 || t1 == 5 || t1 == 11 || t1 == 20)
			{
				t1 = jump(t1);
			}
			else
			{
				t1 = fall(t1);
			}
			cout << "Your Dice Score is " << n1 << " and Player One is on " << t1 << "\n\n";
		}
		t = t + 1;
	}
	else
	{
		cout << "Player Two Turn: ";
		system("pause");
		n2 = rand() % 6 + 1;
		t2 = t2 + n2;


		if (t2 == 1)
		{
			circle(150, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(151, 551, WHITE);
		}
		if (t2 == 2)
		{
			circle(250, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(251, 551, WHITE);
		}
		if (t2 == 3)
		{
			circle(350, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(351, 551, WHITE);
		}
		if (t2 == 4)
		{
			circle(450, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(451, 551, WHITE);
		}
		if (t2 == 5)
		{
			circle(550, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(551, 551, WHITE);
		}
		if (t2 == 6)
		{
			circle(650, 550, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(651, 551, WHITE);
		}
		if (t2 == 12)
		{
			circle(150, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(151, 451, WHITE);
		}
		if (t2 == 11)
		{
			circle(250, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(251, 451, WHITE);
		}
		if (t2 == 10)
		{
			circle(350, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(351, 451, WHITE);
		}
		if (t2 == 9)
		{
			circle(450, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(451, 451, WHITE);
		}
		if (t2 == 8)
		{
			circle(550, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(551, 451, WHITE);
		}
		if (t2 == 7)
		{
			circle(650, 450, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(651, 451, WHITE);
		}
		if (t2 == 13)
		{
			circle(150, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(151, 351, WHITE);
		}
		if (t2 == 14)
		{
			circle(250, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(251, 351, WHITE);
		}
		if (t2 == 15)
		{
			circle(350, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(351, 351, WHITE);
		}
		if (t2 == 16)
		{
			circle(450, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(451, 351, WHITE);
		}
		if (t2 == 17)
		{
			circle(550, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(551, 351, WHITE);
		}
		if (t2 == 18)
		{
			circle(650, 350, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(651, 351, WHITE);
		}
		if (t2 == 24)
		{
			circle(150, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(151, 251, WHITE);
		}
		if (t2 == 23)
		{
			circle(250, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(251, 251, WHITE);
		}
		if (t2 == 22)
		{
			circle(350, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(351, 251, WHITE);
		}
		if (t2 == 21)
		{
			circle(450, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(451, 251, WHITE);
		}
		if (t2 == 20)
		{
			circle(550, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(551, 251, WHITE);
		}
		if (t2 == 19)
		{
			circle(650, 250, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(651, 251, WHITE);
		}
		if (t2 == 25)
		{
			circle(150, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(151, 151, WHITE);
		}
		if (t2 == 26)
		{
			circle(250, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(251, 151, WHITE);
		}
		if (t2 == 27)
		{
			circle(350, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(351, 151, WHITE);
		}
		if (t2 == 28)
		{
			circle(450, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(451, 351, WHITE);
		}
		if (t2 == 29)
		{
			circle(550, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(551, 351, WHITE);
		}
		if (t2 == 30)
		{
			circle(650, 150, 10);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(651, 151, WHITE);
		}

		




		if (t2 == 30)
		{
			cout << "Your Dice Score is " << n2 << " and Player Two Won\n";
			return false;
		}
		else if (t2 > 30)
		{
			t2 = t2 - n2;
			cout << "Your Dice Score is " << n2 << " and You Cann't Run.Player Two is on " << t2 << "\n\n";
		}
		else if (t2 < 30)
		{
			if (t2 == 3 || t2 == 5 || t2 == 11 || t2 == 20)
			{
				t2 = jump(t2);
			}
			else
			{
				t2 = fall(t2);
			}
			cout << "Your Dice Score is " << n2 << " and Player Two is on " << t2 << "\n\n";
		}
		t = t + 1;
	}
}

int main()

{


	do
	{
		board();
		
		game();
		
	
	} while (game());

	system("pause");
	return 0;
}
	

	
