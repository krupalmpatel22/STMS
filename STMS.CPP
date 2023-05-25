#include<iostream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<conio.h>
#define max 100
/*****************************************************************************
    FUNCTION PROTOTYPE
*****************************************************************************/
//void functions
void complain();
void box(int left, int top, int right, int bottom);
void line2();
void student();
void staff();
void studentlogin();
void stafflogin();
void staffdetails();
void compalin();
void recipt();
void scomplain();
void name();
void line3();
void seatno();
void phone();
void rollno();
void modname();
void modrollno();
void modseatno();
void modphone();
void rootalloted();
void srecipt();
void moddetails();
void searchdetails();
void login();
void header();
void footer();
void intro();
void conclude();
void displayall();
//void calc();
//void scalc();
void loading();
void error();
void disdel();
void recdel();
void del();
void errorfile();
//int functions
int line1(int t);
int line4(int t);
/*****************************************************************************
	STRUCTURE
*****************************************************************************/
//int used in structure p,q,r
//register new
struct student
{
	char name[20];
	char phone[11];
	char sex[10];
	char fathername[30];
	char from[20];
	char to[20];
	int seatno;
	int rollno;
	int busno;
	int sclass;
	char username[50];
	char password[10];
	int km;
	int fees;
}p[100];
struct staff
{
	char name[20];
	char phone[11];
	char sex[10];
	char from[20];
	char to[20];
	int seatno;
	int busno;
	int km;
	int fees;
	char username[50];
	char password[10];
}q[100];
//structure delete record
struct del
{
	char name[20];
	char phone[11];
	char sex[10];
	char fathername[30];
	char from[20];
	char to[20];
	int seatno;
	int rollno;
	int busno;
	int sclass;
	char username[50];
	char password[10];
	int km;
	int fees;
}d[100];
//structure search
struct search
{
	char name[10];
	int rollno;
	int seatno;
	char phone[11];
}s[100];

char developer[]="Krupal Patel";
char school[]="delhi public school gandinagar";
char std[]="(2018-19)";
int roll=4;
char user[]="admin", pwd[]="admin";

int i=0,j=0,o=0;//global variable
/****************************************************************************
    MAIN FUNCTION
*****************************************************************************/
void main()
{       //
	clrscr();
	loading();
	intro();
	login();
	char a;
	int b,c,d,e,f;//for switch
	//int ;//for loop
	//char ;//for login username
	//char ;//for password
	int g;//misc.
	hi:
	clrscr();
	textcolor(7);
	box(20,10,60,17);
	gotoxy(22,11);
	textcolor(12);
	cprintf("1. R E G I S T E R");
	gotoxy(22,12);
	textcolor(11);
	cprintf("2. L O G I N");
	gotoxy(22,13);
	textcolor(10);
	cprintf("3. S E A R C H");
	gotoxy(22,14);
	textcolor(14);
	cprintf("4. M O D I F Y");
	gotoxy(22,15);
	textcolor(19);
	cprintf("5. D E L E T E");
	gotoxy(22,16);
	textcolor(8);
	cprintf("6. D I S P L A Y  A L L");
	gotoxy(16,3);
	textcolor(10);
	textbackground(4);
	cprintf(" S  T  U  D  E  N  T    T  R  A  N  S  P  O  R  T \n");
	textbackground(0);
	gotoxy(1,6);
	line2();
	gotoxy(1,20);
	line2();
	textbackground(0);
	gotoxy(22,18);
	textcolor(15);
	cprintf("* * * Enter your choice * * * : ");
	gotoxy(55,18);
	textcolor(7);
	cin>>a;
	switch(a)
	{
		case '1':
		clrscr();
		line3();
		b:
		textcolor(15);
		box(20,10,60,13);
		textcolor(10);
		gotoxy(22,11);
		cprintf("1. student register:\n");
		textcolor(11);
		gotoxy(22,12);
		cprintf("2. staff register:\n");
		gotoxy(22,16);
		textcolor(15);
		cprintf("* * * Enter your choice * * * : ");
		gotoxy(28,3);
		textcolor(10);
		textbackground(4);
		cprintf("  R  E  G  I  S  T  E  R  \n");
		textbackground(0);
		gotoxy(1,6);
		line2();
		gotoxy(1,20);
		line2() ;
		textbackground(0);
		gotoxy(55,16);
		textcolor(15);
		cin>>b;
		switch(b)
		{
			case 1:
			clrscr();
			student();
			i++;
			goto b;
			case 2:
			clrscr();
			staff();
			j++;
			goto b;
		}
		goto hi;
		case '2':
		clrscr();
		line3();
		a:
		textcolor(15);
		box(20,10,60,13);
		textcolor(10);
		gotoxy(22,11);
		cprintf("1. student login:\n");
		gotoxy(22,12);
		textcolor(12);
		cprintf("2. staff login:\n");
		gotoxy(22,16);
		textcolor(15);
		cprintf("* * * Enter your choice * * * : ");
		gotoxy(33,3);
		textcolor(10);
		textbackground(4);
		cprintf("  L  O  G  I  N  \n");
		textbackground(0);
		gotoxy(1,6);
		line2();
		gotoxy(1,20);
		line2();
		textbackground(0);
		gotoxy(55,16);
		textcolor(15);
		cin>>c;
		switch(c)
		{
			case 1:
			clrscr();
			studentlogin();
			goto a;
			case 2:
			clrscr();
			stafflogin();
			goto a;
		}
		goto hi;
		case '3'://search
		clrscr();
		line3();
		c:
		textcolor(15);
		box(20,10,60,15);
		textcolor(10);
		gotoxy(22,11);
		cprintf("1. search by name:");
		gotoxy(22,12);
		textcolor(12);
		cprintf("2. search by seat no:");
		gotoxy(22,13);
		textcolor(14);
		cprintf("3. search by phone number:");
		gotoxy(22,14);
		textcolor(19);
		cprintf("4. Search by rollno:\n");
		gotoxy(22,18);
		textcolor(15);
		cprintf("* * * Enter your choice * * * : ");
		gotoxy(30,3);
		textcolor(10);
		textbackground(4);
		cprintf("  S  E  A  R  C  H  \n");
		textbackground(0);
		gotoxy(1,6);
		line2();
		gotoxy(1,20);
		line2();
		textbackground(0);
		gotoxy(55,18);
		textcolor(7);
		cin>>d;
		switch(d)
		{
			case 1:
			clrscr();
			name();
			goto c;
			case 2:
			clrscr();
			seatno();
			goto c;
			case 3:
			clrscr();
			phone();
			goto c;
			case 4:
			clrscr();
			rollno();
			goto c;
		}
		goto hi;
		case '4': //modify record
		clrscr();
		line3();
		d:
		textcolor(15);
		box(20,10,60,15);
		textcolor(10);
		gotoxy(22,11);
		cprintf("1.modify name:");
		gotoxy(22,12);
		textcolor(12);
		cprintf("2.modify rollno:");
		gotoxy(22,13);
		textcolor(14);
		cprintf("3.modify seatno:");
		gotoxy(22,14);
		textcolor(19);
		cprintf("4.modify phoneno:");
		gotoxy(22,18);
		textcolor(15);
		cprintf("* * * Enter your choice * * * : ");
		gotoxy(30,3);
		textcolor(10);
		textbackground(4);
		cprintf("  M  O  D  I  F  Y  \n");
		textbackground(0);
		gotoxy(1,6);
		line2();
		gotoxy(1,20);
		line2();
		textbackground(0);
		gotoxy(55,18);
		textcolor(7);
		cin>>e;
		switch(e)
		{
			case 1:
			clrscr();
			modname();
			goto d;
			case 2:
			clrscr();
			modrollno();
			goto d;
			case 3:
			clrscr();
			modseatno();
			goto d;
			case 4:
			clrscr();
			modphone();
			goto d;
		}
		goto hi;
		case '5':
		line3();
		e:
		textcolor(15);
		box(20,10,60,14);
		textcolor(10);
		gotoxy(22,11);
		cprintf("1. delete record:");
		gotoxy(22,12);
		textcolor(12);
		cprintf("2. display delete record:");
		gotoxy(22,13);
		textcolor(14);
		cprintf("3. recover deleted records");
		gotoxy(22,16);
		textcolor(15);
		cprintf("* * * Enter your choice * * * : ");
		gotoxy(30,3);
		textcolor(10);
		textbackground(4);
		cprintf("  D  E  L  E  T  E  \n");
		textbackground(0);
		gotoxy(1,6);
		line2();
		gotoxy(1,20);
		line2();
		textbackground(0);
		gotoxy(55,16);
		textcolor(7);
		cin>>f;
		switch(f)
		{
			case 1:
			clrscr();
			del();
			o++;
			goto e;
			case 2:
			clrscr();
			disdel();
			goto e;
			case 3:
			clrscr();
			recdel();
			i++;
			goto e;
		}
		goto hi;
		case '6': //display all
		clrscr();
		displayall();
		goto hi;
		case 8:
		//conclude();
		break;


		}
	conclude();


}
/******************************************************************************
    FUNCTION DEFINE AREA
*******************************************************************************/
void loading()
{
	clrscr();
	char c=178;
	int i;
	textcolor(7);
	box(1,10,80,12);
	for(i=2;i<80;i++)
	{
		gotoxy(i,11);
		textcolor(11);
		cprintf("%c",c);
		delay(100);
		textcolor(15);
		if(i<=20)
		{
			gotoxy(25,15);
			cprintf(" S T O R I N G   M E M O R Y ");
		}
		else
		{
			if(i<=40)
			{
				gotoxy(26,15);
				cprintf(" C O M P A T A B I L I T Y ");
			}

		else
		{
			if(i<=60)
			{
			gotoxy(25,15);
			cout<<(" F E A C H I N G   D A T A B A S I S ");
			}

		else
		{
			if(i<=80)
			{
				gotoxy(13,15);
				cprintf(" C R E A T I N G  S O F T W A R E  E N V I R O N M E N T ");
			}
		}
	}
}
  }
	gotoxy(13,15);
	textbackground(0);
	cprintf("         C O M P A T A B L E   T O   R U N               ");
	gotoxy(10,20);
	textcolor(14);
	cprintf("press any key to continue . . .");
	getch();


}
void login()
{
	//Declared for verifying the password
	char usr[20], pwd2[20];
	int chance=1,i=0;
	//Label assigned for taking input
	start:
	i=0;
	char ch=0;
	clrscr();
	header();
	gotoxy(15,5);
	cout<<"Enter User Name    : ";
	cin>>usr;
	gotoxy(15,6);
	cout<<"Enter the password : ";
	do
	{
	ch=getch();
	if(ch!=13)
	{
		pwd2[i++]=ch;
		cout<<"*";
	}
	else
	pwd2[i++]='\0';
	}while(ch!=13);

	if(strcmp(usr,user)==0 && strcmp(pwd2,pwd)==0)
	{
		gotoxy(15,8);
		cout<<"Password Matching....";
		for(int i=1;i<=100;i++)
		{
			delay(10);
			gotoxy(15,11);

			if(i<100)
			cout<<i<<"% Loading...";
			else
			cout<<i<<"% Loading completed....";
		}
		gotoxy(15,15);
		cout<<"Welcome : "<<developer<<" to student transport System...";
		gotoxy(53,20);
		textcolor(14);
		cprintf("Press any key to continue...");
		textcolor(7);
		footer();
		getch();
	}
	else
	{
		gotoxy(15,8);
		cout<<"Password Wrong....";
		gotoxy(15,10);
		cout<<chance<<" used of 3 chances...";
		gotoxy(15,12);
		cout<<"Enter the correct credentials";
		chance++;
		getch();
		if(chance<=3) goto start;
		else
		{
			gotoxy(15,14);
			textcolor(4);
			cprintf("You are Unauthorized to access....");
			errorfile();
			error();
			getch();
			exit(0);
		}
	textcolor(7);
	}
}
void header()
{
	cout<<"\n\n";
	textbackground(4);
	textcolor(10);
	cprintf(" D E L H I   P U B L I C   S C H O O L   G A N D I N A G A R ,  I N D I A .     ");
	textcolor(7);
	textbackground(0);
	cout<<"\n";
}

//Setting the footer to display the information of developer at bottom of page
void footer()
{
	textbackground(4);
	textcolor(10);
	gotoxy(2,23);
	cprintf(" Made By: %s, %s, %s, Roll No. %d.",developer,school,std,roll);
	textcolor(7);
	textbackground(0);
}

//Displaying the first page on the screen.
void intro()
{
	clrscr();
	header();
	cout<<endl<<endl;
	line2();
	cout<<"\n\n";
	//stars();
	line2();
	gotoxy(16,14);
	textcolor(11);
	cprintf(" S  T  U  D  E  N  T    T  R  A  N  S  P  O  R  T \n");
	cout<<"\n\n\n\n";
	line2();
	cout<<"\n\n";
	//stars();
	line2();
	cout<<"\n";
	footer();
	textcolor(7);
	getch();
}
void conclude()
{
	clrscr();
	header();
	line1(11);
	cout<<"\n\n";
	//stars();
	line2();
	gotoxy(34,10);
	textcolor(11);
	cprintf("T H A N K S");
	gotoxy(34,12);
	cprintf("   F O R   ");
	gotoxy(34,14);
	cprintf(" U S I N G ");
	textbackground(0);
	cout<<endl<<endl<<endl;
	line1(10);
	cout<<"\n\n";
	// stars();
	line2();
	footer();
	getch();
}
void box(int left, int top, int right, int bottom)
{
	int i;
	clrscr();
	gotoxy(left,top);
	printf("%c",218);
	for(i=0;i<right-left-1;i++)
	{
		printf("%c",196);
	}
	printf("%c",191);
	for(i=1;i<bottom-top;i++)
	{
		gotoxy(left,top+i);
		printf("%c",179);
		gotoxy(right,top+i);
		printf("%c",179);
	}
	gotoxy(left,bottom);
	printf("%c",192);
	for(i=0;i<right-left-1;i++)
	{
		printf("%c",196);
	}
	printf("%c",217);
}
int line1(int t)
{
	int i;
	for(i=0;i<80;i++)
	{
		textcolor(t);
		cprintf(".",1);
	}
	return 0;
}
void line2()
{
	int i,g;
	for(i=0;i<80;i++)
	{
		g=random(2);
		if(g==1)
		{
			textcolor(random(15));
			cprintf("*");
		}
		else
		{
			textcolor(random(15));
			cprintf("-");
		}

	}

}
void line3()
{
	clrscr();
	int i,j;
	for(i=0;i<80;i++)
	{
		delay(10);
		gotoxy(i,5);
		textcolor(11);
		cprintf("_");
		gotoxy(80-i,15);
		textcolor(10);
		cprintf("_");
	}
	delay(100);
}
int line4(int t)
{
	int i;
	for(i=0;i<80;i++)
	{
		textcolor(t);
		cprintf("_",1);
	}
	return 0;
}

void student()
{
	randomize();
	cout<<"Enter name : ";
	gets(p[i].name);
	cout<<"Enter roll no. : ";
	cin>>p[i].rollno;
	cout<<"Enter class : ";
	cin>>p[i].sclass;
	cout<<"Enter phone no. : ";
	gets(p[i].phone);
	cout<<"Enter sex : ";
	gets(p[i].sex);
	cout<<"Enter father name : ";
	gets(p[i].fathername);
	cout<<"Enter pickup point : ";
	gets(p[i].from);
	cout<<"Enter drop point : ";
	gets(p[i].to);
	cout<<" your bus no : ";
	p[i].busno=random(5);
	cout<<p[i].busno<<"\n";
	cout<<"Enter your seat no. : ";
	cin>>p[i].seatno;
	cout<<"Enter distance (in km) : ";
	cin>>p[i].km;
	// scalc();
	p[i].fees=p[i].km*10;
	cout<<"your monthly charges are : "<<p[i].fees<<"\n";
	line1(10);
	textcolor(12);
	cprintf("\nMake user name and password");
	cout<<"\n\tEnter username : ";
	gets(p[i].username);
	cout<<"\tEnter password : ";
	gets(p[i].password);
}
void staff()
{
	randomize();
	cout<<"Enter name : ";
	gets(q[j].name);
	cout<<"Enter phone no. : ";
	gets(q[j].phone);
	cout<<"Enter sex : ";
	gets(q[j].sex);
	cout<<"Enter pickup point : ";
	gets(q[j].from);
	cout<<"Enter stoppoint : ";
	gets(q[j].to);
	cout<<"bus no : ";
	q[j].busno=random(5);
	cout<<q[j].busno<<"\n";
	cout<<"Enter your seatno : ";
	cin>>q[j].busno;
	cout<<"Enter distance (in km) : ";
	cin>>q[j].km;
	//calc();
	q[j].fees=q[j].km*10;
	cout<<"your monthly charges are : "<<q[j].fees<<"\n";
	line1(10);
	textcolor(12);
	cprintf("\nEnter user name and password\n\n");
	cout<<"Enter username : ";
	gets(q[j].username);
	cout<<"Enter password : ";
	gets(q[j].password);
}
void studentlogin()
{
	char ch[10],pw[10];
	int k,a;
	cout<<"Enter username : ";
	gets(ch);
	cout<<"Enter password : ";
	gets(pw);
	for(k=0;k<i;k++)
	{
		if(strcmp(ch,p[k].username)==0)
		{
			if(strcmp(pw,p[k].password)==0)
			{
				by:
				clrscr();
				textcolor(15);
				box(20,10,60,14);
				textcolor(10);
				gotoxy(22,11);
				cprintf("1. complain : ");
				gotoxy(22,12);
				textcolor(12);
				cprintf("2. staff contact details : ");
				gotoxy(22,13);
				textcolor(14);
				cprintf("3. recipt : ");
				cout<<"\n\n\n";
				gotoxy(22,18);
				textcolor(15);
				cprintf("* * * Enter your choice * * * : ");
				gotoxy(30,3);
				textcolor(10);
				textbackground(4);
				cprintf(" W E L C O M E   U S E R ");
				textbackground(0);
				gotoxy(1,6);
				line2();
				gotoxy(1,20);
				line2();
				textbackground(0);
				gotoxy(55,18);
				textcolor(7);
				cin>>a;
				switch(a)
				{
					case 1:
					complain();
					goto by;
					case 2:
					staffdetails();
					goto by;
					case 3:
					recipt();
					goto by;


				}//end switch*/
			}//end if
			else
			{
				cout<<"password not mached";
			}

		}//end if
		else
		{
			cout<<"\nwrong user name\n";
		}
	}//end of loop
	getch();
}
void stafflogin()
{
	char ch1[10],pw1[10];
	int k,a;
	cout<<"Enter username : ";
	gets(ch1);
	cout<<"Enter password : ";
	gets(pw1);
	for(k=0;k<j;k++)
	{
		if(strcmp(ch1,q[k].username)==0)
		{
			if(strcmp(pw1,q[k].password)==0)
			{
				by:
				clrscr();
				textcolor(15);
				box(20,10,60,14);
				textcolor(10);
				gotoxy(22,11);
				cprintf("1. complain : ");
				textcolor(12);
				gotoxy(22,12);
				cprintf("2. root alloted to staff : ");
				textcolor(13);
				gotoxy(22,13);
				cprintf("3. recipt : ");
				cout<<"\n\n\n";
				gotoxy(22,18);
				textcolor(15);
				cprintf("* * * Enter your choice * * * : ");
				gotoxy(30,3);
				textcolor(10);
				textbackground(4);
				cprintf(" W E L C O M E   U S E R ");
				textbackground(0);
				gotoxy(1,6);
				line2();
				gotoxy(1,20);
				line2();
				textbackground(0);
				gotoxy(55,18);
				textcolor(7);
				cin>>a;
				switch(a)
				{
					case 1:
					clrscr();
					scomplain();
					goto by;
					case 2:
					clrscr();
					rootalloted();
					goto by;
					case 3:
					clrscr();
					srecipt();
					goto by;
				}
			}//end of if
			else
			{
				cout<<"password not matched";
			}
		}//end of if
		else
		{
			cout<<"wrong user name : ";
		}
	}//end of loop
}
void complain()
{
	int k;
	char comp[1000];
	clrscr();
	for(k=0;k<i;k++)
	{
		line2();
		cout<<"\n\n";
		line1(10);
		cout<<"\n\n";
		cout<<"\t"<<p[k].name<<" Enter your complain : ";
		gets(comp);
		cout<<"\n\n";
		line1(11);
		cout<<"\n\n";
		line2();
	}
	getch();
}
void staffdetails()
{
	clrscr();
	int k;
	for(k=0;k<j;k++)
	{
		cout<<"\n\n";
		line1(11);
		cout<<"name : ";
		cout<<q[k].name<<"\n";
		cout<<"phone no : ";
		cout<<q[k].phone<<"\n";
		cout<<"bus no : ";
		cout<<q[k].busno<<"\n";
		cout<<"seatno : ";
		cout<<q[k].seatno<<"\n";
		cout<<"distance (in km)";
		cout<<p[k].km;
		cout<<"\n\n";
		line1(10);
	}
	getch();
}
void recipt()
{
	clrscr();
	int k;
	for (k=0;k<i;k++)
	{
		line2();
		cout<<"\n\n";
		cout<<"name : ";
		cout<<p[k].name<<"\n";
		cout<<"rollno : ";
		cout<<p[k].rollno<<"\n";
		cout<<"class : ";
		cout<<p[k].sclass<<"\n";
		cout<<"phone no : ";
		cout<<p[k].phone<<"\n";
		cout<<"father name : ";
		cout<<p[k].fathername<<"\n";
		cout<<"total money : ";
		//scalc();
		cout<<p[k].fees<<"\n";
		cout<<"\n\n";
		line2();
	}
	getch();
}
void scomplain()
{
	int k;
	char comp[1000];
	clrscr();
	for(k=0;k<i;k++)
	{
		line1(10);
		cout<<"\n\n";
		line2();
		cout<<"\n\n";
		cout<<"\t"<<q[k].name<< " Enter your complain : ";
		gets(comp);
		cout<<"\n\n";
		line1(10);
		cout<<"\n\n";
		line2();
	}
	getch();
}
void name()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your name : ";
		gets(s[k].name);
		if(strcmp(s[k].name,p[k].name)==0)
		{
			searchdetails();
		}
		else
		{
			cout<<"R E C O R D  N O T  F O U N D";
		}
	}
	getch();
}

void seatno()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your seatno:";
		cin>>s[k].seatno;
		if(s[k].seatno==p[k].seatno)
		{
			searchdetails();
		}
		else
		{
			cout<<"R E C O R D  N O T  F O U N D";
		}
	}
	getch();
}

void phone()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your phone:";
		gets(s[k].phone);
		if(strcmp(s[k].phone,p[k].phone)==0)
		{
			searchdetails();
		}
		else
		{
			cout<<"R E C O R D  N O T  F O U N D";
		}
	}
	getch();
}
void rollno()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your rollno:";
		cin>>s[k].rollno;
		if(s[k].rollno==p[k].rollno)
		{
			searchdetails();
		}
		else
		{
			cout<<"R E C O R D  N O T  F O U N D";
		}
	}
	getch();
}
void modname()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your name to modify : ";
		gets(s[k].name);
		if(strcmp(s[k].name,p[k].name)==0)
		{
			cout<<"Enter modified name : ";
			gets(p[k].name);
			moddetails();
		}
		else
		{
			cout<<"N A M E  N O T  F O U N D";
		}
	}
	getch();
}
void modrollno()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your rollno to modify : ";
		cin>>s[k].rollno;
		if(s[k].rollno==p[k].rollno)
		{
			cout<<"Enter your modified rollno : ";
			cin>>p[k].rollno;
			moddetails();
		}
		else
		{
			cout<<"R O L L  N O .  N O T  F O U N D";
		}
	}
	getch();
}
void modseatno()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your seatno to modify : ";
		cin>>s[k].seatno;
		if(s[k].seatno==p[k].seatno)
		{
			cout<<"Enter your modified seatno : " ;
			cin>>p[k].seatno;
			moddetails();
		}
		else
		{
			cout<<"S E A T   N O .  N O T  F O U N D ";
		}
	}
	getch();
}

void modphone()
{
	clrscr();
	int k;
	for(k=0;k<i;k++)
	{
		cout<<"Enter your phone to modify : ";
		gets(s[k].phone);
		if(strcmp(s[k].phone,p[k].phone)==0)
		{
			cout<<"Enter your modified phone no : ";
			gets(p[k].phone);
			moddetails();
		}
		else
		{
			cout<<"P H O N E  N O .  N O T  F O U N D";
		}
	}
	getch();
}
void rootalloted()
{
	clrscr();
	int k;
	for (k=0;k<j;k++)
	{
		line1(10);
		cout<<"\n\n";
		cout<<q[j].name<<" you have alloted bus no"<<q[j].busno;
		cout<<"\n\n";
		line1(11);
	}
	getch();
}
void srecipt()
{
	clrscr();
	int k;
	for (k=0;k<j;k++)
	{
		line2();
		cout<<"\n\n";
		line1(10);
		cout<<"\n\n";
		cout<<"name: ";
		cout<<q[k].name<<"\n";
		cout<<"phone no: ";
		cout<<q[k].phone<<"\n";
		cout<<"total money: ";
		//calc();
		cout<<q[k].fees<<"\n";
		cout<<"\n\n";
		line1(11);
		cout<<"\n\n";
		line2();
	}
	getch();
}
void moddetails()
{
	clrscr();
	int k;
	textcolor(10);
	textbackground(4);
	gotoxy(40,3);
	cprintf("  M O D I F I E D   D E T A I L S  \n");
	textbackground(0);
	cout<<"\n";
	line1(14);
	cout<<"\n";
	for(k=0;k<i;k++)
	{
		cout<<"name : ";
		cout<<p[k].name<<"\n";
		cout<<"rollno : ";
		cout<<p[k].rollno<<"\n";
		cout<<"class : ";
		cout<<p[k].sclass<<"\n";
		cout<<"phone no : ";
		cout<<p[k].phone<<"\n";
		cout<<"sex : ";
		cout<<p[k].sex<<"\n";
		cout<<"father name : ";
		cout<<p[k].fathername<<"\n";
		cout<<"pickup point : ";
		cout<<p[k].from<<"\n";
		cout<<"droppoint : ";
		cout<<p[k].to<<"\n";
		cout<<"bus no : ";
		cout<<p[k].busno<<"\n";
		cout<<"your seat no : ";
		cout<<p[k].seatno<<"\n";
		cout<<"distance (in km) : ";
		cout<<p[k].km<<"\n";
		line1(10);
	}
	getch();
}
void searchdetails()
{
	clrscr();
	int k;
	textcolor(10);
	textbackground(4);
	gotoxy(40,3);
	cprintf("  S E A R C H  D E T A I L S  ");
	textbackground(0);
	cout<<"\n";
	line1(11);
	cout<<"\n";
	for(k=0;k<i;k++)
	{
		cout<<"name : ";
		cout<<p[k].name<<"\n";
		cout<<"rollno : ";
		cout<<p[k].rollno<<"\n";
		cout<<"class : ";
		cout<<p[k].sclass;
		cout<<"phone no : ";
		cout<<p[k].phone<<"\n";
		cout<<"sex : ";
		cout<<p[k].sex<<"\n";
		cout<<"father name : ";
		cout<<p[k].fathername<<"\n";
		cout<<"pickpoint : ";
		cout<<p[k].from<<"\n";
		cout<<"stoppoint : ";
		cout<<p[k].to<<"\n";
		cout<<"bus no : ";
		cout<<p[k].busno<<"\n";
		cout<<"your seat no : ";
		cout<<p[k].seatno<<"\n";
		cout<<"distance (in km) : ";
		cout<<p[k].km<<"\n";
		line1(10);
	}
	getch();
}

/*void scalc()
{
 int k;
 for(k=0;k<i;k++)
 {
  p[k].fees=p[k].km*10;
 }
}
void calc()
{
 int k;
 for(k=0;k<j;k++)
 {
  q[k].fees=q[k].km*10;
 }
}*/

void del()
{
	clrscr();
	textcolor(10);
	textbackground(12);
	gotoxy(30,3);
	cprintf(" D E L E T E  R E C O R D \n");
	textbackground(0);
	int k,l,pos,no,flag=0;
	cout<<"\n";
	line2();
	cout<<"\n\n";
	line1(11);
	cout<<"\n\nEnter the Roll No. you want to delete : ";
	cin>>no;
	for(k=0;k<i;k++)
	{
		if(no==p[k].rollno)
		{
			pos=k;
			flag++;
			strcpy(d[k].name,p[k].name);
			d[k].rollno=p[k].rollno;
			d[k].sclass=p[k].sclass;
			strcpy(d[k].phone,p[k].phone);
			strcpy(d[k].sex,d[k].sex);
			strcpy(d[k].fathername,p[k].fathername);
			strcpy(d[k].from,p[k].from);
			strcpy(d[k].to,p[k].to);
			d[k].busno=p[k].busno;
			d[k].km=p[k].km;
			d[k].seatno=p[k].seatno;
			strcpy(d[k].username,p[k].username);
			strcpy(d[k].password,p[k].password);
			d[k].fees=p[k].fees;

			cout<<"\nThe following record is deleted...\n";
			cout<<"Roll No. " <<p[k].rollno<<", Name: "<<p[k].name<<endl;
			cout<<"\n\n";
			line1(10);
			cout<<"\n\n";
			line2();

			getch();
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n\tThe Roll No. "<<no<<" is not in record.\n";
		cout<<"\n\n";
		line1(10);
		cout<<"\n\n";
		line2();
	}

	else
	{
		for(k=pos;k<i-1;k++)
		{
			p[k]=p[k+1];
		}
		i--;
	}
	getch();
}
void disdel()
{
	int k;

	for(k=0;k<o;k++)
	{
		cout<<"name : "<<d[k].name<<"\n";//=p[k].name;
		cout<<"rollno : "<<d[k].rollno<<"\n";//=p[k].rollno;
		cout<<"class : "<<d[k].sclass<<"\n";//=p[k].sclass;
		cout<<"phone : "<<d[k].phone<<"\n";//=p[k].phone;
		cout<<"sex : "<<d[k].sex<<"\n";//=p[k].sex;
		cout<<"fathername : "<<d[k].fathername<<"\n";//=p[k].fathername;
		cout<<"from : "<<d[k].from<<"\n";//=p[k].from;
		cout<<"to : "<<d[k].to<<"\n";//=p[k].to;
		cout<<"busno : "<<d[k].busno<<"\n";//=p[k].busno;
		cout<<"seatno : "<<d[k].seatno<<"\n";//=p[k].seatno;
		cout<<"km : "<<d[k].km<<"\n";//=p[k].km;
		cout<<"fees : "<<d[k].fees<<"\n";//=p[k].fees;
		cout<<"username : "<<d[k].username<<"\n";//=p[k].username;
		cout<<"password : "<<d[k].password<<"\n";//=p[k].password;
		line2();
	}

	getch();
}
void recdel()
{
	clrscr();
	textcolor(10);
	textbackground(12);
	gotoxy(30,3);
	cprintf(" D E L E T E  R E C O R D \n");
	textbackground(0);
	int k,l,pos,no,flag=0;
	cout<<"\n";
	line2();
	cout<<"\n\n";
	line1(11);
	cout<<"\nEnter the Roll No. you want to restore : ";
	cin>>no;
	for(k=0;k<o;k++)
	{
		if(no==d[k].rollno)
		{
			pos=k;
			flag++;
			strcpy(p[k].name,d[k].name);
			p[k].rollno=d[k].rollno;
			p[k].sclass=d[k].sclass;
			strcpy(p[k].phone,d[k].phone);
			strcpy(p[k].sex,d[k].sex);
			strcpy(p[k].fathername,d[k].fathername);
			strcpy(p[k].from,d[k].from);
			strcpy(p[k].to,d[k].to);
			p[k].busno=d[k].busno;
			p[k].km=d[k].km;
			p[k].seatno=d[k].seatno;
			strcpy(p[k].username,d[k].username);
			strcpy(p[k].password,d[k].password);
			p[k].fees=d[k].fees;

			cout<<"\nThe following record is recovered\n";
			cout<<"Roll No. " <<d[k].rollno<<", Name: "<<d[k].name<<endl;
			cout<<"\n\n";
			line1(10);
			cout<<"\n\n";
			line2();
			getch();
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n\tThe Roll No. "<<no<<" is not in record.\n";
		cout<<"\n\n";
		line1(10);
		cout<<"\n\n";
		line2();

	}
	else
	{
		for(k=pos;k<o-1;k++)
		{
			d[k]=d[k+1];
		}
		o--;
	}
	getch();
}

void disphead()
{
	clrscr();
	cout<<setw(8)<<"name";
	cout<<setw(10)<<"class";
	cout<<setw(10)<<"rollno";
	cout<<setw(12)<<"phone no";
	cout<<setw(10)<<"bus no";
	cout<<setw(10)<<"seat no";
	cout<<setw(8)<<"(KM)";
	cout<<setw(10)<<"fees";
}
void displayall()
{
	disphead();
	cout<<"\n";
	line2();
	cout<<"\n";
	int k;
	for(k=0;k<i;k++)
	{
		cout<<setw(8)<<p[k].name;
		cout<<setw(10)<<p[k].sclass;
		cout<<setw(10)<<p[k].rollno;
		cout<<setw(12)<<p[k].phone;
		cout<<setw(10)<<p[k].busno;
		cout<<setw(10)<<p[k].seatno;
		cout<<setw(8)<<p[k].km;
		cout<<setw(10)<<p[k].fees;
		cout<<"\n";
		line1(10);
		cout<<"\n";
	}
	getch();
}
void errorfile()
{
	clrscr();
	int i,j;
	for(i=0;i<49;i++)
	{
		clrscr();
		textcolor(12);
		gotoxy(i,10);
		textcolor(12);
		cprintf(" F I L E S");
		gotoxy(80-i,10);
		cprintf("D E L E T I N G");
		delay(20);
		textcolor(10);
	}
	for(i=0;i<101;i++)
	{
		if(i<100)
		{
			gotoxy(15,15);
			delay(10);
			cout<<i<<"%LOADING";
		}
		else
		{
			gotoxy(15,15);
			cout<<i<<"%LOADING COMPLETED";
		}
	}
	getch();
}

void error()
{
	clrscr();
	int  i,j,k;
	char ch;
	for(i=0;i<50;i++)
	{
		for(j=0;j<80;j++)
		{
			delay(1);
			gotoxy(random(j),random(i));
			ch=random(200);
			textcolor(10);
			cprintf("%c",ch);
		}
	}
	getch();
}