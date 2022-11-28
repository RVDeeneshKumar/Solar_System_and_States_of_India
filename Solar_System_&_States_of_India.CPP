#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"c:\\TC\\bgi");     //Initializing Graphics Mode
   setbkcolor(YELLOW);
   setcolor(RED);
   settextstyle(7,0,5);
   outtextxy(150,150,"  WELCOME");
   delay(1500);
   clrscr();
   settextstyle(7,0,2);
   outtextxy(20,20,"Project Goals");delay(1000);
   outtextxy(50,50,"1.To Display the planents in our SOLAR SYSTEM ");delay(1000);
   outtextxy(90,90,"2.To Give some info about states in INDIA");
   delay(2000);
 {
 clrscr();
   settextstyle(7,0,4);
   outtextxy(10,10,"                       SOLAR SYSTEM");

setbkcolor(BLACK);
setcolor(WHITE);
delay(500);
circle(10,10,150);
settextstyle(0,0,5);
outtextxy(10,20,"SUN");

setcolor(YELLOW);
delay(500);
circle(150,150,6);
settextstyle(0,0,1);
outtextxy(150,130,"Mercury");

setcolor(RED);
delay(500);
circle(175,175,7);
outtextxy(175,150,"Venus");

setcolor(BLUE);
delay(500);
circle(200,200,9);
outtextxy(200,180,"EARTH");

setcolor(RED);
delay(500);
circle(225,225,8);
outtextxy(225,200,"Mars");

setcolor(WHITE);
delay(500);
circle(10,10,325);
outtextxy(250,100,"Asteroids");

setcolor(BROWN);
delay(500);
circle(275,275,35);
outtextxy(275,250,"Jupiter");

setcolor(RED);
delay(500);
circle(325,325,20);
outtextxy(325,300,"Saturn");

setcolor(GREEN);
delay(500);
circle(375,375,18);
outtextxy(375,350,"Uranus");

setcolor(BLUE);
delay(500);
circle(425,425,15);
outtextxy(425,400,"Neptune");
clrscr();

}
clrscr();
{
setbkcolor(BLACK);
setcolor(BROWN);
settextstyle(7,0,5);
outtextxy(0,50,"        States in INDIA");delay(1000);clrscr();
int ch;
cout<<"\n Enter ur choice";
cout<<"\n1.Andhra Pradesh\t2.Arunachal Pradesh\n3.Assam\t4.Bihar\n5.Chhattisgarh\t6.Goa\n7.Gujarat\t8.Haryana\n9.Himachal Pradesh\t10.Jammu&Kashmir\n11.Jharkand\t12.Karnataka\n13.Kerala\t14.Madhya Pradesh\n15.Maharashtra\t16.Manipur\n17.Meghalaya\t18.Mizoram\n19.Nagaland\t20.Odisha\n21.Punjab\t22.Rajasthan\n23.Sikkim\t24.Tamil Nadu\n25.Telangana\t26.Tripura\n27.Uttarakhand\t28.Uttar Pradesh\n29.West Bengal";
cin>>ch;
switch(ch)
{
case 1:cout<<"Capital:Hyderabad\n\nLanguage Spoken:Telugu\n\nMajor Rivers:Krishna,Godavari";break;
case 2:cout<<"Capital:Itanagar\n\nLanguage Spoken:Nyishi,Dafla,Miji,etc...\n\nMajor Rivers:Brahmaputra";break;
case 3:cout<<"Capital:Dispur\n\nLanguage Spoken:Assamese,Bengali,Bodo and English\n\nMajor Rivers:Brahmaputra";break;
case 4:cout<<"Capital:Patna\n\nLanguage Spoken:Hindi\n\nMajor Rivers:Ganga,Gandaki";break;
case 5:cout<<"Capital:Raipur\n\nLanguage Spoken:Hindi\n\nMajor Rivers:Godavari,Mahanadi";break;
case 6:cout<<"Capital:Panaji\n\nLanguage Spoken:Konkani,Marathi\n\nMajor Rivers:Zuari,Mandovi";break;
case 7:cout<<"Capital:Gandhinagar\n\nLanguage Spoken:Gujarati\n\nMajor Rivers:Narmada,Tapi,Sabarmati";break;
case 8:cout<<"Capital:Chandigarh\n\nLanguage Spoken:Hindi\n\nMajor Rivers:Yamuna";break;
case 9:cout<<"Capital:Shimla\n\nLanguage Spoken\n\nMajor Rivers:Sutlej,Beas,Ravi,Chenab,Yamuna";break;
case 10:cout<<"Capital:Srinagar,Jammu\n\nLanguage Spoken:Kashmiri,Urudu,Dogri,Ladakhi\n\nMajor Rivers:Jhelum,Indus,Chenab";break;
case 11:cout<<"Capital:Ranchi\n\nLanguage Spoken:Hindi\n\nMajor Rivers:Ganga,Son";break;
case 12:cout<<"Capital:Bengaluru\n\nLanguage Spoken:Kannada\n\nMajor Rivers:Kaveri,Krishna,Godavari";break;
case 13:cout<<"Capital:Thiruvananthapuram\n\nLanguage Spoken:Malayalam\n\nMajor Rivers:Periyar,Pambaetc..";break;
case 14:cout<<"Capital:Bhopal\n\nLanguage Spoken:Hindi\n\nMajor Rivers:Narmada,Tapi,Son";break;
case 15:cout<<"Capital:Mumbai\n\nLanguage Spoken:Marathi,Hindi\n\nMajor Rivers:Godavari,Krishna,Tapi";break;
case 16:cout<<"Capital:Imphal\n\nLangugae Spoken:Manipuri\n\nMajor Rivers:Barak";break;
case 17:cout<<"Capital:Shillong\n\nLanguage Spoken:Khasi,Puar etc...\n\nMajor Rivers:Someswari";break;
case 18:cout<<"Capital:Aizawl\n\nLanguage Spoken:Mizo,English\n\nMajor Rivers:Tlawng";break;
case 19:cout<<"Capital:Kohima\n\nLanguage Spoken:Nagamese,English\n\nMajor Rivers:Barak";break;
case 20:cout<<"Capital:Bhubaneswar\n\nLanguage Spoken:Oriya\n\nMajor Rivers:Mahanadi";break;
case 21:cout<<"Capital:Chandigarh\n\nLanguage Spoken:Punjabi\n\nMajor Rivers:Sutlej,Beas,Ravi";break;
case 22:cout<<"Capital:Jaipur\n\nLanguage Spoken:Rajasthani\n\nMajor Rivers:Chambal,Luni,Sabarmathi";break;
case 23:cout<<"Capital:Gangtok\n\nLanguage Spoken:Hindi,Nepali\n\nMajor RIvers:Teesta";break;
case 24:cout<<"Capital:Chennai\n\nLanguage Spoken:Tamil\n\nMajor Rivers:Kaveri,Vaigai,Pala";break;
case 25:cout<<"Capital:Hyderabad\n\nLanguage Spoken:Telgu,Urdu\n\nMajor Rivers:Godavari,Krishna";break;
case 26:cout<<"Capital:Agartala\n\nLanguage Spoken:Bengali,Manipuri\n\nMajor Rivers:Gomati";break;
case 27:cout<<"Capital:Dehradun\n\nLanguage Spoken:HIndi\n\nMajor Rivers:Ganga,Yamuna";break;
case 28:cout<<"Capital:Lucknow\n\nLanguage Spoken:Hindi,Urdu\n\nMajor Rivers:Ganga,Yamuna,Gomati";break;
case 29:cout<<"Capital:Kolkata\n\nLanguage Spoken:Bengali\n\nMajor Rivers:Hooghly";break;
default:cout<<"Invalid Choice";break;
} }
delay(3000);
clrscr();
setbkcolor(RED);
setcolor(YELLOW);
settextstyle(7,0,5);
cout<<"";
outtextxy(100,200,"       THANK U!!!");
cout<<"\n\n\n\n\n\n\n\n\n\nn\n\n\n\n\n\n\n\n\n\n\n\n";
getch();
}



