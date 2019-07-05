#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
x=y=z=0;
char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
cout<<"        Guest Enter Your Name";
cin>>ch1;
clrscr();
cout<<"        Welcome "<<ch1<<".Sobriquet is an unofficial title or
name given to someone or something.";
cout<<"Enter answer in form of ‘a','b' and'c'only.";
cout<<"What is called as ‘ THE HOLYLAND'? \na.Jerusalem\nb.Mathura\nc.Mecca";
cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE ROOF OF THE WORLD'?\na.Nepal\nb.Rome\nc.Tibet";
cin>>ch2;
if(ch2=='c')
{
x=x+10;
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE LAND OF RISING SUN'?\na.Chicago\nb.Japan\nc.Tibet";
cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE GIFT OF NILE'?\na.Chicago\nb.Egypt\nc.Africa";
cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE LAND OF MIDNIGHT SUN'?\na.Norway\nb.Japan\nc.Australia";
cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"
What is called as ‘ THE LAND OF THUNDERBOLT'?\na.Bhutan\nb.Canada\nc.Arab";
cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE WINDY CITY?\na.Jerusalem\nb.Japan\nc.Chicago";
cin>>ch2;
if(ch2=='c')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE LAND OF WHITE ELEPHANTS'?\na.Bangladesh\nb.Thailand\nc.India";
cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE CITY OF SEVEN HILLS'?\na.Rome\nb.Nilgiri Hills\nc.Tibet";
cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
cout<<"What is called as ‘ THE DARK CONTIENENT'?\na.Asia\nb.Australia\nc.Africa";
cin>>ch2;
if(ch2=='c')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
if(x==100)
cout<<"No cheating…… You have done this earlier also.";
if(x==90)
cout<<"You are extremely intelligent
Your Score is 90?;
if(x==80)
cout<<"You are intelligent
Your Score is 80?;
if(50==x||x==70||x==60)
cout<<"You are average
Your Score is "<<x<<"
Better luck next
time";
else if(x<=40)
cout<<"No use…….. Not even 5 questions right";
getch();
}

