#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
char tic[3][3]={'1','2','3','4','5','6','7','8','9'};
void Draw()
{
	cout<<"\n\n\t\t\t      TIC TOC TOE";
	cout<<"\n\n\n\n\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<"\t\t\t\t";
		for(int j=0;j<3;j++)
		{
			cout<<tic[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
}
void Replace(int p,char c)
{
	if(p==1)
	{
		tic[0][0]=c;
	}
	if(p==2)
	{
		tic[0][1]=c;
	}
		if(p==3)
	{
		tic[0][2]=c;
	}
		if(p==4)
	{
		tic[1][0]=c;
	}
		if(p==5)
	{
		tic[1][1]=c;
	}
		if(p==6)
	{
		tic[1][2]=c;
	}
		if(p==7)
	{
		tic[2][0]=c;
	}
		if(p==8)
	{
		tic[2][1]=c;
	}
		if(p==9)
	{
		tic[2][2]=c;
	}
}
void Compare(char ch)
{
	if((tic[0][0]==tic[0][1]&&tic[0][0]==tic[0][2]) || (tic[0][0]==tic[1][0]&&tic[0][0]==tic[2][0]) ||
	(tic[0][0]==tic[1][1] && tic[0][0]==tic[2][2]) ||
	(tic[0][1]==tic[1][1] && tic[0][1]==tic[2][1])  ||
	(tic[0][2]==tic[1][2] && tic[0][2]==tic[2][2]) ||
	(tic[0][2]==tic[1][1] && tic[0][2]==tic[2][0]) ||
	(tic[1][0]==tic[1][1] && tic[1][0]==tic[1][2]) ||
	(tic[2][0]==tic[2][1] && tic[2][0]==tic[2][2]))
	{
		if(ch=='X')
		{
			clrscr();
			Draw();
			cout<<"\n\n\t\tYayy Congratulations! Player 1 wins...X is winner";
		}
		else
		{
			clrscr();
			Draw();
			cout<<"\n\n\t\tYayy Congratulations! Player 2 wins...Y is winner";
		}
		getch();
		exit(0);
	}
}
void main()
{
	int count=0,pos;
	clrscr();
	cout<<endl<<endl;
    //	Draw();
	while(count<9)
	{
		clrscr();
		Draw();
		count++;
		if(count%2!=0)
		{
			cout<<"\n\n\t\t'X' for 1st player : Enter your position : ";
			cin>>pos;
			Replace(pos,'X');
			Compare('X');
		}
		else
		{
			cout<<"\n\n\t\t'Y' for 2nd player : Enter your position : ";
			cin>>pos;
			Replace(pos,'Y');
			Compare('Y');
		}
	}
	clrscr();
	getch();
}
