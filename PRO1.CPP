#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include"graph.h"
#include<string.h>
#include<fstream.h>
#include<dos.h>
#include<alloc.h>
#include<stdlib.h>
#include<iomanip.h>

static int incr;
static int a;
class  pro{

	   int regno,age;
	   char name[20],fname[20],course[10];
	   char phno[10];
	   float per;
   public :int i,j;
	   char username[20],username1[20],pass[10],pass1[10];

	 void login() {
	 dora();
	 setcolor(RED);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	 outtextxy(450,200,"LOGIN");
	 outtextxy(360,250,"Enter the username ");
	 outtextxy(360,300,"Enter the password ");
		for(i=20;i<=20;i++)
		  {for(j=70;j<=79;j++) {
		     gotoxy(j,i);
		     cout<<" ";
		    } }
		for(i=17;i<=17;i++)
		  {for(j=70;j<=79;j++) {
		     gotoxy(j,i);
		     cout<<" ";
		    }}
		gotoxy(70,17);
		cin>>username;
		setcolor(BROWN);
		gotoxy(70,20);
		cin>>pass;
		ifstream o1;
		o1.open("kp.c",ios::in);
		o1>>username1;
		o1>>pass1;
		if((strcmp(username1,username)) ==0)
			{
				if(   (strcmp(pass1,pass))==0)
				{
				settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
				outtextxy(10,360,"Successfully Login");
				 delay(300);

				 cleardevice();
				 setcolor(WHITE);
				 splash();
				 }
					else
			{
				settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
				outtextxy(10,380,"Incorrect Username & Password");
				settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
				outtextxy(400,400,"press any key to retry");
				     getch();
				     a++;
				     if(a==3)
				     {
				       outtextxy(10,410,"Too many attempts");
				       delay(1000);
				       exit(0);
				     }
				     cleardevice();
				     login();
			}
		}
		else
			{
				settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
				outtextxy(10,380,"Incorrect Username & Password");
				settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
				outtextxy(400,400,"press any key to retry");
				     getch();
				     a++;
				     if(a==3)
				     {
				       outtextxy(10,410,"Too many attempts");
				       delay(1000);
				       exit(0);
				     }
				     cleardevice();
				     login();
		}
}
void splash()
{
		 cleardevice();
		 mick();
		 setcolor(BLUE);
		 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
		 outtextxy(10,20,"WELCOME");
		 setcolor(GREEN);
		  outtextxy(30,70,"TO");
		  setcolor(RED);
		  outtextxy(40,120,"THE");
		  setcolor(5);
		   outtextxy(50,170,"PROJECT");
		   setcolor(7);
		   outtextxy(400,200,"OF");
		   setcolor(BROWN);
		    outtextxy(420,250,"COLLEGE");
		    setcolor(LIGHTBLUE);
		    outtextxy(440,300,"MANAGEMENT");
		    setcolor(13);
		    outtextxy(460,350,"SYSTEM");
				 setcolor(0);
		     outtextxy(10,375,"Loading Please Wait..............");
		     gotoxy(30,26);
		     for(i=0;i<=10;i++)
			{
			delay(500);
			  gotoxy(40+i,25);
			  cout<<".";
			}
			menu();
}
 void menu()
	 {
	       cleardevice();
		dora();
		setcolor(LIGHTBLUE);
		outtextxy(440,100,"1.ADD NEW RECORD");
		setcolor(LIGHTBLUE);
		outtextxy(440,150,"2.SHOW RECORD");
		setcolor(LIGHTBLUE);
		outtextxy(440,200,"3.SEARCHING RECORD");
		setcolor(LIGHTBLUE);
		outtextxy(440,250,"4.UPDATE RECORD");
		setcolor(LIGHTBLUE);
		outtextxy(440,300,"5.DELETE RECORD");
		setcolor(LIGHTBLUE);
		outtextxy(440,350,"6.EXIT");
	    //   outtextxy(50,400,"enter your choice");
}
	int lastcode();
	void getdata()
	{
	clrscr();
			 setfillstyle(SOLID_FILL,WHITE);
			 floodfill(1,1,0);
			 setcolor(RED);
	     //	static int regno=getregno();
	       //		regno++;
	//incr++;
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
	outtextxy(50,27,"your registration no is= ");
	gotoxy(40,1);
	cout<<"last reg no="<<regno;
	outtextxy(50,60,"Enter your name          ");
	outtextxy(50,90,"Enter your father name   ");
	outtextxy(50,125,"Enter the age           ");
	outtextxy(50,155,"Enter the course        ");
	outtextxy(50,185,"Enter the percentage    ");
	outtextxy(50,215,"Enter the phone no      ");
		for(i=5;i<=5;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }}
		for(i=7;i<=7;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }}
		for(i=9;i<=9;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }  }
		for(i=11;i<=11;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }  }
		for(i=13;i<=13;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }  }
		for(i=15;i<=15;i++)
		  {
		    for(j=40;j<=55;j++)
		    {
		     gotoxy(j,i);
		     cout<<" ";
		    }  }
	gotoxy(40,3);
	cin>>regno;
	gotoxy(40,5);
	gets(name);
	gotoxy(40,7);
	gets(fname);
	gotoxy(40,9);
	cin>>age;
	gotoxy(40,11);
	cin>>course;
	gotoxy(40,13);
	cin>>per;
	gotoxy(40,15);
	cin>>phno;
	}
	void showdata()
	{cout<<"|"<<setw(2)<<regno<<setw(2)<<"|"<<setw(15)<<name<<setw(2)
	<<"|"<<setw(15)<<fname<<setw(2)<<"|"<<setw(3)<<age<<setw(5)<<"|"
	<<setw(6)<<course<<setw(3)<<"|"<<setw(6)<<per<<"%"<<setw(2)<<"|"
	<<setw(11)<<phno<<setw(2)<<"|"<<"\n\n";
	}
	int getregno()
	{
	return(regno);}
	void modify()
       {
       cout<<"\n rollno:"<<regno<<endl;
       cout<<"\n the name:"<<name;
       cout<<"\n the fname:"<<fname;
       cout<<"\n the age :"<<age;
       cout<<"\n the course:"<<course;
       cout<<"\n the per:"<<per;
       cout<<"\n the phno :"<<phno;
       cout<<"\n enter the new detail\n";
       int nregno,nage;
       char nname[20],nfname[20],ncourse[10];
       char nphno[10];
       float nper;
       cout<<"new regno:(enter '-1'to retain old one)";
       cin>>nregno;
       cout<<"new name: (enter '.'to retain old one)";
       gets(nname);
       cout<<"new fname:(enter '.'to retain old one)";
       gets(nfname);
       cout<<"new age:(enter '-1'to retain old one)";
       cin>>nage;
       cout<<"new course: (enter '.'to retain old one)";
       cin>>ncourse;
       cout<<"new per:(enter '-1'to retain old one)";
       cin>>nper;
       cout<<"new phno:(enter '.'to retain old one)";
       cin>>nphno;
       if(nregno!=-1)
       regno=nregno;
       if(strcmp(nname,".")!=0)
       strcpy(name,nname);
       if(strcmp(nfname,".")!=0)
       strcpy(fname,nfname);
       if(nage!=-1)
       age=nage;
       if(strcmp(ncourse,".")!=0)
       strcpy(course,ncourse);
       if(nper!=-1)
       per=nper;
       if(strcmp(nphno,".")!=0)
       strcpy(phno,nphno);
       cout<<"the record are modify";
       }
	}s1;       /*
	int pro::lastcode()
	{
	fstream l;
	l.open("new.txt",ios::in);
	l.seekg(0,ios::beg);
	int count=0;
	while(l.read((char *)&s1,sizeof(s1)))
	count=regno;
	l.close();
	return count;
	}            */
void main()
   {
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	  setfillstyle(SOLID_FILL,WHITE);
	  floodfill(1,1,BLUE);
	  setcolor(BLACK);
	s1.login();
	int y=5,no;
	while(1) {
	cin>>no;
	switch(no)
	{
	   case 1 :      clrscr();
			 setfillstyle(SOLID_FILL,WHITE);
			 floodfill(1,1,BLUE);
			 setcolor(RED);
			 fstream o1;
			 o1.open("a7.txt",ios::app | ios::in |ios::binary);
			 char ans= 'y';
			 while(ans=='y')
			 {
				s1.getdata();
				o1.write((char *)&s1,sizeof(s1));
				outtextxy(50,250,"The data is added successfully");
				outtextxy(50,300,"Do you want to add more record(y/n)");
				cin>>ans;

			 }
			 o1.close();

			 break;

	   case 2: clrscr();
		   setfillstyle(SOLID_FILL,0);
		   floodfill(1,1,BLUE);
		   setcolor(WHITE);
		   fstream i;
		   i.open("a7.txt",ios::app|ios::in|ios::binary);
		   i.seekg(0);
		   cout<<"\n\n\n****************************  Showing you the record  **************************\n\n\n";
		cout<<"  ROLLNO "<<"      NAME  "<<"       FNAME  "<<"     AGE  "<<"    COURSE  "<<"   PER  "<<"    PHNONO " <<"\n\n\n";
		cout<<"********************************************************************************";

		   while(1)
		   {
		      if(i.read((char *)&s1,sizeof(s1)))
		      {              y++;
			s1.showdata();
		      }
		      else
		      {
			break;
		      }
		   }
		   i.close();

		   break;

	   case 3: clrscr();
		   setfillstyle(SOLID_FILL,0);
		   floodfill(1,1,BLUE);
		   setcolor(WHITE);
		   fstream i1;
		   i1.open("a7.txt",ios::app|ios::in|ios::binary);
		   int sregno,f=0;
		   i1.seekg(0);
		   outtextxy(10,20,"Enter the reg no ");
		   gotoxy(40,4);
		   cin>>sregno;

		   cout<<"\n\n\n****************************  Showing you the record  **************************\n\n\n";
		cout<<"  ROLLNO "<<"      NAME  "<<"       FNAME  "<<"     AGE  "<<"    COURSE  "<<"   PER  "<<"    PHNONO " <<"\n\n\n";
		cout<<"********************************************************************************";

		   while(1)
		   {
			if(i1.read((char *)&s1,sizeof(s1)))
			{
				if(s1.getregno()==sregno)
				{
					s1.showdata();
					 f=1;
					 break;
				}
			}
			else
			break;

		   }
		   if(f==0)
		   cout<<"Not found";
		   i1.close();
		   getch();
		   break;

	   case 4: clrscr();
		   setfillstyle(SOLID_FILL,0);
		   floodfill(1,1,BLUE);
		   setcolor(WHITE);
		   fstream m;
		   m.open("a7.txt",ios::binary|ios::in|ios::out);
		    f=0;
		   int pos,mregno;
		   outtextxy(10,20,"Enter the regno to modify");
		   gotoxy(70,3);
		   cin>>mregno;
			while(1)
			{
			    if(m.read((char *)&s1,sizeof(s1)))
			    {
				if(s1.getregno()==mregno)
				{
				   s1.modify();
				   pos=m.tellg();
				   m.close();
				   m.open("a7.txt",ios::out|ios::binary|ios::in);
				   m.seekp(pos-sizeof(s1));
				   m.write((char *)&s1,sizeof(s1));
				   f=1;
				   break;


				}
			    }
			    else
			    break;

			}
			if(f==0);
			cout<<"Record are not found";
			break;
	   case 5:   int dregno;
		     clrscr();
		     setfillstyle(SOLID_FILL,0);
		     floodfill(1,1,BLUE);
		     setcolor(WHITE);
		    fstream d;
		    d.open("a7.txt",ios::in|ios::out|ios::ate);
		    f=0;
		    fstream t;
		    t.open("t2.txt",ios::out);
		    d.seekg(0,ios::beg);
		    cout<<"Enter the registration no to delete";
		    cin>>dregno;
		    while(d.read((char *)&s1,sizeof(s1)))
		     {
			if(s1.getregno()!=dregno)
			{
				t.write((char *)&s1,sizeof(s1));
			}
			else
			{
				f=1;
			}
		     }
		     t.close();
		     d.close();
		     remove("a7.txt");
		     rename("t2.txt","a7.txt");
		     if(f==1)
		     cout<<"data deleted";
		     else
		     cout<<"Records are not found";
		     break;



	   case 6: exit(0);
	   default :  outtextxy(10,400,"Wrong choice");
			delay(500);
		      s1.menu();




	}
	 getch();

	s1.menu();
	}

	 getch();
	 closegraph();
 }