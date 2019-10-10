#include<iostream>
#include<string>
#include"../Hide.h"
#include"../Color.h"
#include"../gotoxy.h"
using namespace std;

const int HEIGHT=15,WIDTH=35,rgb[6]={4,6,14,10,11,1};
int grid[HEIGHT][WIDTH] = {0};//zero in grid means gone 1 means there is still a box there
int tick = 0;

//////////////create tick timer////////////////////
void newtick()
{
	Sleep(20);
	tick++;
	if(tick > 10000);
}

//////////////TODO:create directions////////////////////



//////////////create grid////////////////////
void PrintBox()
{
	for(int i = 0;i < HEIGHT;i++)
	{
		for(int j=0;j<WIDTH;j++)
		{
			color(rgb[(i+j)%6]);
			cout<< char(219)<<char(219)<<char(219);
			grid[i][j]=1;
			newtick();
		}
		cout << endl;
	}
	color(7);
}
//////////////TODO:detect colision////////////////////

int main()
{
	PrintBox();
	cout << tick;



	return 0;
}
