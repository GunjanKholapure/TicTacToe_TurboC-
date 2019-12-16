#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<time.h>


class name{

public :




char player1[11],player2[11];



void inputName(){

x :
clrscr();
cleardevice();




setbkcolor(2);

setcolor(1);

outtextxy(10,10,"Enter name of player 1 :-\n");
outtextxy(10,35,"(Name should have less than 10 characters)");
cout<<"\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";
setcolor(6);
rectangle(267,122,355,147);
setfillstyle(1,6);
floodfill(302,132,6) ;


gets(player1);



if(strlen(player1)>10){
setcolor(11);
rectangle(50,80,550,230);
setfillstyle(1,11);
floodfill(400,150,11) ;


setcolor(12);
outtextxy(60,100,"Only 9 characters will be displayed on the screen.");
outtextxy(60,150,"Do you wish to rewrite your name?(y/n)");


z :

for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}

char a;



a = getch();


if(a=='y'){

goto x;
}


if(a=='n'){


player1[9] = '\0';


clrscr();

cleardevice();
setbkcolor(2);

setcolor(1);

outtextxy(10,10,"Enter name of player 1 :-\n");
outtextxy(10,35,"(Name should have less than 10 characters)");
cout<<"\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";
setcolor(6);
rectangle(267,122,355,147);
setfillstyle(1,6);
floodfill(302,132,6) ;

cout<<player1;
cout<<"\n";
}


if(a!='y' && a!='n'){

goto z;



}


}
r :

setcolor(1);

outtextxy(10,200,"Enter name of player 2:-\n");
outtextxy(10,225,"(Name should have less than 10 characters)") ;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";

setcolor(6);
rectangle(267,330,355,356);
setfillstyle(1,6);
floodfill(302,350,6);



gets(player2) ;


if(strlen(player2)>10){
setcolor(11);
rectangle(50,80,550,230);
setfillstyle(1,11);
floodfill(400,150,11) ;


setcolor(12);
outtextxy(60,100,"Only 9 characters will be displayed on the screen.");
outtextxy(60,150,"Do you wish to rewrite your name?(y/n)");

y :

for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}

char a;



a = getch();


if(a=='y'){

clrscr();

cleardevice();
setbkcolor(2);

setcolor(1);

outtextxy(10,10,"Enter name of player 1 :-\n");
outtextxy(10,35,"(Name should have less than 10 characters)");
cout<<"\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";
setcolor(6);
rectangle(267,122,355,147);
setfillstyle(1,6);
floodfill(302,132,6) ;

cout<<player1;
cout<<"\n";



goto r;
}


if(a=='n'){

player2[9] = '\0';
clrscr();

cleardevice();
setbkcolor(2);

setcolor(1);

outtextxy(10,10,"Enter name of player 1 :-\n");
outtextxy(10,35,"(Name should have less than 10 characters)");
cout<<"\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";
setcolor(6);
rectangle(267,122,355,147);
setfillstyle(1,6);
floodfill(302,132,6) ;

cout<<player1;
cout<<"\n";

outtextxy(10,200,"Enter name of player 2:-\n");
outtextxy(10,225,"(Name should have less than 10 characters)") ;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n" ;
cout<<"                                  ";

setcolor(6);
rectangle(267,330,355,356);
setfillstyle(1,6);
floodfill(302,350,6);

cout<<player2;

}


if(a!='n' && a!='y'){

goto y;


}





}






}


};






class declare {

public :



void p1(char *a){

cleardevice();


time_t t = time(0);
char* dt = ctime(&t);



ofstream f1;
f1.open("winner",ios::ate);




f1<<"Win"<<"    "<<"     "<<a<<"     "<<dt<<endl;


f1.close();

setbkcolor(7);
setcolor(1);
settextstyle(4,HORIZ_DIR,10);
outtextxy(30,80,a);
outtextxy(170,220,"Wins!!") ;
//outtextxy();

for(int i=0;i<3;i++){

sound(700);
delay(200);
nosound();

sound(500);
delay(100);
nosound();


sound(800);
delay(250);
nosound();

sound(1000);
delay(300);
nosound();

}


delay(1000);
exit(0);
}




};




struct decide{

int x;
int y;

};





void makecrcl(int c, int ro, int ra);
void makecross(int col, int row);
void maketri(int c, int r);
void makestar(int c, int r);

void win1(char *a);
void win2(char *b);
void win3(char *c);
void win4(char *e);
void tie();

decide start();
void intro();
decide shape();
void options();
void transition();
void transition1();
void entersnd();
void warning();


void main()
{clrscr();

int driver, mode;
driver = DETECT;
initgraph(&driver, &mode,"C:\\Turboc3\\BGI");




int r=230, c= 265,r1[9],c1[9],x=0,i= -1,j=-1,k,r2[9],c2[9],r3[9],c3[9],cnt=0,
    y,z,cnt1=0,cnt2=0,a,b,cnt3=0,cnt4=0,t1,t2,big1=-1,big2=-1
   ;


name n;


decide change;


change = start();

n.inputName();




ofstream f1;
f1.open("winner",ios::ate);


int len1,len2,space;
len1 = strlen(n.player1) ;
len2 = strlen(n.player2) ;


f1<<n.player1;

for(space=len1;space<=9;space++){
f1<<" ";
}

f1<<"     "<<n.player2;

for (space = len2; space<=9;space++){
f1<<" " ;

}
f1<<"     ";




f1.close();



while(1){


if(x==1){


setcolor(7) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,230,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}
delay(800);
}


if(cnt1>0){
cnt1=0;

setcolor(5);
rectangle(50,120,600,230);
setfillstyle(1,5);
floodfill(157,122,5);


setcolor(7);
settextstyle(7,HORIZ_DIR,3);
outtextxy(100,150,"Can't Draw. Shape Already Present !");

for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}

delay(800);
}




if(cnt3>0){
cnt3=0;


setcolor(5);
rectangle(50,120,620,230);
setfillstyle(1,5);
floodfill(157,122,5);


setcolor(7);
settextstyle(7,HORIZ_DIR,3);

outtextxy(60,150,n.player1) ;
outtextxy(210,150," : Press 'M' to draw your shape");

for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}

delay(800);
}


if(cnt4>0){

cnt4=0;

setcolor(5);
rectangle(50,120,620,230);
setfillstyle(1,5);
floodfill(157,122,5);



setcolor(14);
settextstyle(7,HORIZ_DIR,3);

outtextxy(60,150,n.player2);
outtextxy(210,150," : Press 'C' to draw your shape");

for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}

delay(800);
}


cleardevice();


setbkcolor(2);





setcolor(1);
settextstyle(8,HORIZ_DIR,8);
moveto(getmaxx()/2 - 240,0);
outtext("Tic Tac Toe");


setcolor(15);
line(265,120,265,450);
line(375,120,375,450);
line(155,230,485,230);
line(155,340,485,340) ;

int ch;

setcolor(4);
rectangle(c,r,c+110,r+110);

if(i==j){
setcolor(7);
settextstyle(6,HORIZ_DIR,4);
outtextxy(10,275,n.player1);
}



if(i>j){
setcolor(14) ;
settextstyle(6,HORIZ_DIR,4);
outtextxy(490,275,n.player2);
}






for(k=0;k<=i;k++){

if(big1<i){
sound(200);
delay(50);
nosound();
big1=i;
}

if(change.x ==1){
makecrcl(c1[k]+55,r1[k]+55,30);
}

if(change.x == 2){
makecross(c1[k] + 55,r1[k]+55);
}

if(change.x==3){
maketri(c1[k],r1[k]) ;
}

if(change.x==4) {
makestar(c1[k],r1[k]);
}


}

for(k=0;k<=j;k++){

if(big2<j){
sound(100);
delay(50);
nosound();
big2=j;
}


if(change.y==1){
makecrcl(c1[k]+55,r1[k]+55,30);
}

if(change.y==2){
makecross(c2[k]+55,r2[k]+55)  ;
}

if(change.y==3){
maketri(c2[k],r2[k]) ;
}

if(change.y==4){
makestar(c2[k],r2[k]) ;
}



}


if(change.x==1){
win1(n.player1);
}
if(change.x==2){
win2(n.player1);
}
if(change.x==3){
win3(n.player1);
}
if(change.x==4){
win4(n.player1);
}


if(change.y==1){
win1(n.player2);
}
if(change.y==2){
win2(n.player2);
}
if(change.y==3){
win3(n.player2);
}
if(change.y==4){
win4(n.player2);
}





if(i==4) {
delay(1000);
tie();
}




ch = getch();




if(ch== 109){

i=i+1;
r1[i] = r ;
c1[i] = c ;

}




if(ch==  99){

j=j+1;
r2[j] = r;
c2[j] = c;

}


a=i;
b=j;

for(y=0;y<=a;y++){
for(z=0;z<=b;z++){

if( (r1[y]==r2[z]) && (c1[y] == c2[z])  ){



if(i>j ){
i=i-1;
cnt1 = cnt1+1;
break;
}

if(i==j){
j=j-1;
cnt1 = cnt1 +1;

}



}

}
}


for(y=0;y<=a-1;y++){
for(z=y+1;z<=a;z++){




if( ( r1[z] == r1[y]) && (c1[z] == c1[y]) ){


i=i-1;
cnt1++;





}


}
}



for(y=0;y<=b-1;y++){
for(z=y+1;z<=b;z++){

if( (r2[z] == r2[y]) && (c2[z] == c2[y]) ){



j=j-1;
cnt1++;






}
}
}



if(j>i){
j=j-1;
cnt3++;
}

if(i>j+1){
i=i-1;
cnt4++;
}








if (ch ==  101 ){

i=i-1;
}

if(ch == 110){

j=j-1;
}

if(ch==72){


if(r==120 ){
r=340;
}
else{
r=r-110;
}

transition1();
}


if(ch==80){

if(r== 340 ){
r = 120;
}
else{
r=r+110;
}

transition1();

}



if(ch==75){
if(c==155){
c=375;
}
else{
c=c-110;

transition1();

}

}

if(ch==77){
if(c==375){
c=155;
}

else{
c=c+110;
}

transition1();

}


if(ch==27){

exit(0) ;
}

if(ch==72 || ch == 0 || ch==75 || ch==77 || ch==80 || ch==27 || ch==99 || ch==101 || ch==110 || ch==109 ){
x=0;
}
else{
x=1;
}




}






}


void makecrcl(int c, int ro, int ra){

setcolor(7);
circle(c,ro,ra);

}


void makecross(int col,int row){

setcolor(14);
setlinestyle(1,1,30);
line(col-30,row-30,col+30,row+30);
line(col+30,row-30,col-30,row+30);


}


void maketri(int c, int r){
int poly[8]  = {c+55,r+25,c+25,r+85,c+85,r+85,c+55,r+25};

setcolor(6);
drawpoly(4,poly);
}


void makestar(int c, int r){

int poly[8]  = {c+55,r+25,c+10,r+70,c+100,r+70,c+55,r+25};
int poly1[8]  = {c+10,r+40,c+100,r+40,c+55,r+85,c+10,r+40};

setcolor(3);

drawpoly(4,poly);
drawpoly(4,poly1);



}



void win1(char *a){

name n;


decide change;



int clr1[9];

clr1[0] =  getpixel(180,175);
clr1[1] =  getpixel(290,175);
clr1[2] =  getpixel(400,175);

clr1[3] =  getpixel(180,285);
clr1[4] =  getpixel(290,285);
clr1[5] =  getpixel(400,285);

clr1[6] =  getpixel(180,395);
clr1[7] =  getpixel(290,395);
clr1[8] =  getpixel(400,395);


setcolor(15);

declare d ;



if(clr1[0] == 7 && clr1[1] == 7 && clr1[2] == 7){
line(155,175,485,175);
delay(1000);


d.p1(a);



}

if(clr1[3] == 7 && clr1[4] == 7 && clr1[5] == 7){
line(155,285,485,285);
delay(1000);
d.p1(a);
}

if(clr1[6] == 7 && clr1[7] == 7 && clr1[8] == 7){
line(155,395,485,395);
delay(1000);
d.p1(a);
}

if(clr1[0] == 7 && clr1[3] == 7 && clr1[6] == 7){
line(210,120,210,450);
delay(1000);

d.p1(a);

}

if(clr1[1] == 7 && clr1[4] == 7 && clr1[7] == 7){
line(320,120,320,450);
delay(1000);

d.p1(a);


}

if(clr1[2] == 7 && clr1[5] == 7 && clr1[8] == 7){
line(430,120,430,450);
delay(1000);

d.p1(a);
}

if(clr1[0] == 7 && clr1[4] == 7 && clr1[8] == 7){
line(155,120,485,450);
delay(1000);
d.p1(a);


}

if(clr1[2] == 7 && clr1[4] == 7 && clr1[6] == 7){
line(485,120,155,450);
delay(1000);
d.p1(a);



}


}

void win2(char *b){
name n;

int clr2[9];

clr2[0] = getpixel(180,145);
clr2[1] = getpixel(290,145);
clr2[2] = getpixel(400,145);

clr2[3] = getpixel(180,255);
clr2[4] = getpixel(290,255);
clr2[5] = getpixel(400,255);

clr2[6] = getpixel(180,365);
clr2[7] = getpixel(290,365);
clr2[8] = getpixel(400,365);



setcolor(15);
declare d;



if(clr2[0] == 14 && clr2[1] == 14 && clr2[2] == 14){
line(155,175,485,175);
delay(1000);

d.p1(b);

}

if(clr2[3] == 14 && clr2[4] == 14 && clr2[5] == 14){

line(155,285,485,285);
delay(1000);
d.p1(b);



}

if(clr2[6] == 14 && clr2[7] == 14 && clr2[8] == 14){
line(155,395,485,395);
delay(1000);
d.p1(b);


}

if(clr2[0] == 14 && clr2[3] == 14 && clr2[6] == 14){
line(210,120,210,450);
delay(1000);
d.p1(b);


}

if(clr2[1] == 14 && clr2[4] == 14 && clr2[7] == 14){

line(320,120,320,450);
delay(1000);
d.p1(b);


}

if(clr2[2] == 14 && clr2[5] == 14 && clr2[8] == 14){
line(430,120,430,450);
delay(1000);
d.p1(b);


}

if(clr2[0] == 14 && clr2[4] == 14 && clr2[8] == 14){
line(155,120,485,450);
delay(1000);
d.p1(b);


}

if(clr2[2] == 14 && clr2[4] == 14 && clr2[6] == 14){
line(485,120,155,450);
delay(1000);
d.p1(b);


}


}



void win3(char *c){

name n;

int clr1[9];

clr1[0] =  getpixel(210,145);
clr1[1] =  getpixel(320,145);
clr1[2] =  getpixel(430,145);

clr1[3] =  getpixel(210,255);
clr1[4] =  getpixel(320,255);
clr1[5] =  getpixel(430,255);

clr1[6] =  getpixel(210,365);
clr1[7] =  getpixel(320,365);
clr1[8] =  getpixel(430,365);


setcolor(15);

declare d ;



if(clr1[0] == 6 && clr1[1] == 6 && clr1[2] == 6){
line(155,175,485,175);
delay(1000);
d.p1(c);
}

if(clr1[3] == 6 && clr1[4] == 6 && clr1[5] == 6){
line(155,285,485,285);
delay(1000);
d.p1(c);
}

if(clr1[6] == 6 && clr1[7] == 6 && clr1[8] == 6){
line(155,395,485,395);
delay(1000);
d.p1(c);
}

if(clr1[0] == 6 && clr1[3] == 6 && clr1[6] == 6){
line(210,120,210,450);
delay(1000);

d.p1(c);

}

if(clr1[1] == 6 && clr1[4] == 6 && clr1[7] == 6){
line(320,120,320,450);
delay(1000);

d.p1(c);


}

if(clr1[2] == 6 && clr1[5] == 6 && clr1[8] == 6){
line(430,120,430,450);
delay(1000);

d.p1(c);
}

if(clr1[0] == 6 && clr1[4] == 6 && clr1[8] == 6){
line(155,120,485,450);
delay(1000);
d.p1(c);


}

if(clr1[2] == 6 && clr1[4] == 6 && clr1[6] == 6){
line(485,120,155,450);
delay(1000);
d.p1(c);


}


}

void win4(char *e){

name n;

int clr2[9];

clr2[0] = getpixel(210,145);
clr2[1] = getpixel(320,145);
clr2[2] = getpixel(430,145);

clr2[3] = getpixel(210,255);
clr2[4] = getpixel(320,255);
clr2[5] = getpixel(430,255);

clr2[6] = getpixel(210,365);
clr2[7] = getpixel(320,365);
clr2[8] = getpixel(430,365);



setcolor(15);
declare d;



if(clr2[0] == 3 && clr2[1] == 3 && clr2[2] == 3){
line(155,175,485,175);
delay(1000);

d.p1(e);

}

if(clr2[3] == 3 && clr2[4] == 3 && clr2[5] == 3){

line(155,285,485,285);
delay(1000);
d.p1(e);



}

if(clr2[6] == 3 && clr2[7] == 3 && clr2[8] == 3){
line(155,395,485,395);
delay(1000);
d.p1(e);


}

if(clr2[0] == 3 && clr2[3] == 3 && clr2[6] == 3){
line(210,120,210,450);
delay(1000);
d.p1(e);


}

if(clr2[1] == 3 && clr2[4] == 3 && clr2[7] == 3){

line(320,120,320,450);
delay(1000);
d.p1(e);


}

if(clr2[2] == 3 && clr2[5] == 3 && clr2[8] == 3){
line(430,120,430,450);
delay(1000);
d.p1(e);


}

if(clr2[0] == 3 && clr2[4] == 3 && clr2[8] == 3){
line(155,120,485,450);
delay(1000);
d.p1(e);


}

if(clr2[2] == 3 && clr2[4] == 3 && clr2[6] == 3){
line(485,120,155,450);
delay(1000);
d.p1(e);


}
}





decide start(){

int x=0,y=1;

decide d1;


d1.x=1;
d1.y=2;

while(1){

cleardevice();

setbkcolor(10) ;

setcolor(9);
rectangle(200,50,400,130);
rectangle(200,150,400,230);
rectangle(200,250,400,330);
rectangle(200,350,400,430);
setfillstyle(1,9);
floodfill(202,52,9);
floodfill(202,152,9);
floodfill(202,252,9);
floodfill(202,352,9);


setcolor(6);
settextstyle(6,HORIZ_DIR,3);

outtextxy(250,70,"How to play");
outtextxy(270,170,"Options");
outtextxy(210,270,"Choose The Shape");
outtextxy(245,370,"Play Game");


setcolor(8);

int ch;
int poly[8] = {145,55+x,195,90+x,145,125+x,145,55+x};

drawpoly(3,poly);
setfillstyle(1,8);
fillpoly(3,poly);



ch = getch();


if( (ch == 72 && poly[1] == 55) || (ch==80 && poly[5] == 425) ){
sound(500);
delay(100);
nosound();

continue ;
}





if(ch == 72){
x= x-100;
sound(500);
delay(100);
nosound();

}

if(ch == 80){
x=x+100;
sound(500);
delay(100);
nosound();

}

if(ch==13 && poly[1] == 55){
transition();

intro();
}


if(ch==13 && poly[1] == 155){

transition();

options();
}

if(ch==13 && poly[1] == 255){
transition();

d1=shape();

}

if(ch==13 && poly[1] == 355){

transition();
break;

}


if(ch==112){

ch=getch();
if(ch==114){

ch=getch();

if(ch==101){

ch=getch();

if(ch==118) {

ch=getch();

if(ch==13){


clrscr();
cleardevice();



ifstream f2;
f2.open("winner");

char line[80];


while(!f2.eof()){
setbkcolor(1);
f2.getline(line,80);
cout<<line<<endl;


}
getch();
f2.close();



}
}
}
}
}


if(ch == 27){
exit(0);
}

}

return d1;
}







void intro(){



cleardevice();
setbkcolor(2);

setcolor(1);
settextstyle(8,HORIZ_DIR,8) ;
outtextxy(50,0,"How to Play?");


setcolor(6);
settextstyle(6,HORIZ_DIR,4) ;
outtextxy(10,170,"It's a two player game. Two players each");
outtextxy(10,200,"choose one shape (o/x). Then one by one each");
outtextxy(10,230,"player enters his/her shape in the nine places");
outtextxy(10,260,"available. If any player is successfull in filling");
outtextxy(10,290,"his/her shape in three consecutive positions ");
outtextxy(10,320,"either horizontally, vertically or  diagonally");
outtextxy(10,350,"then he/she wins otherwise there is a tie ");
outtextxy(10,380,"between both the players.");

getch();

transition();

}


void options(){

cleardevice();

setcolor(1);
settextstyle(8,HORIZ_DIR,8) ;
outtextxy(150,0,"Options");


setcolor(6);
settextstyle(6,HORIZ_DIR,4) ;

outtextxy(10,170,"Press arrow keys to move to the desired pos.");
outtextxy(10,210,"Player 1 : Press 'M' to make the selected shape.");
outtextxy(10,250,"Player 2 : Press 'C' to make the selected shape. ");
outtextxy(10,290,"P1 : Press 'E' to erase ur shape at prev. pos.");
outtextxy(10,330,"P2 : Press 'N' to erase ur shape at prev. pos.");
outtextxy(10,370,"Press 'Esc' to quit game at any time.");

getch();
transition();
}



decide shape(){


decide d;



int ch,c=30,cntc=0,cntcr=0,cntt=0,cnts=0,rectpos=0,repeatcol;
char a;
int tri[8] = {365,125,395,185,335,185,365,125};
int star1[8]  = {505,125,550,170,460,170,505,125};
int star2[8] =  {460,140,550,140,505,185,460,140};
int tri1[8] = {365,355,335,415,395,415,365,355};
int stara[8] = {505,355,460,400,550,400,505,355};
int starb[8] = {460,370,550,370,505,415,460,370};

while(1){

x:

cleardevice();


if(rectpos==0){


if(cntc>0) {

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 1");
outtextxy(120,250,"Shape - circle");
outtextxy(120,290,"Confirm?(y/n)");



for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}



a= getch();

if(a=='y'){
d.x=1;
rectpos= 1;
repeatcol=30;
entersnd();
}

if(a=='n'){
d.x=1;
entersnd();

}

cntc=0;

if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}
delay(800);

cntc=1;
goto x;

}

}


if(cntcr>0){

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 1");
outtextxy(120,250,"Shape - cross");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.x=2;
c=30;
rectpos =1;
repeatcol=170;
entersnd();


}

if(a=='n'){
d.x=1;
entersnd();

}



cntcr=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cntcr=1;
goto x;
}



}



if(cntt>0){

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 1");
outtextxy(120,250,"Shape - Triangle");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.x=3;
c=30;
rectpos=1;
repeatcol=310;
entersnd();


}

if(a=='n'){
d.x=1;
entersnd();

}



cntt=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cntt=1;
goto x;

}


}

if(cnts>0){


setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 1");
outtextxy(120,250,"Shape - Star");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.x=4;
c=30;
rectpos =1;
repeatcol=450;
entersnd();


}

if(a=='n'){
d.x=1;
entersnd();

}



cnts=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cnts=1;
goto x;

}

}

}


if(rectpos==1){

if(cntc>0) {

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 2");
outtextxy(120,250,"Shape - circle");
outtextxy(120,290,"Confirm?(y/n)");



for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}



a= getch();

if(a=='y'){
d.y=1;
entersnd();
}

if(a=='n'){
d.y=2;
entersnd();

}

cntc=0;

if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}
delay(800);

cntc=1;
goto x;

}

}


if(cntcr>0){

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 2");
outtextxy(120,250,"Shape - cross");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.y=2;
c=30;
entersnd();


}

if(a=='n'){
d.y=2;
entersnd();

}



cntcr=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cntcr=1;
goto x;
}



}



if(cntt>0){

setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 2");
outtextxy(120,250,"Shape - Triangle");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.y=3;
c=30;
entersnd();


}

if(a=='n'){
d.y=2;
entersnd();

}



cntt=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cntt=1;
goto x;

}


}

if(cnts>0){


setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Player 2");
outtextxy(120,250,"Shape - Star");
outtextxy(120,290,"Confirm?(y/n)");




for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}




a= getch();




if(a=='y'){
d.y=4;
c=30;

entersnd();


}

if(a=='n'){
d.y=2;
entersnd();

}



cnts=0;



if(a!='y' && a!='n'){

setcolor(14) ;
settextstyle(7,HORIZ_DIR,7) ;
outtextxy(100,350,"Invalid Input");


for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}


delay(800);
cnts=1;
goto x;

}

}


}
cleardevice();



setcolor(1);
settextstyle(8,HORIZ_DIR,5);
outtextxy(20,10,"Player 1 -");
outtextxy(20,240,"Player 2 - ");

setcolor(15);
rectangle(30,100,140,210);
rectangle(170,100,280,210);
rectangle(310,100,420,210);
rectangle(450,100,560,210);

rectangle(30,330,140,440);
rectangle(170,330,280,440);
rectangle(310,330,420,440);
rectangle(450,330,560,440);



setcolor(7);
circle(85,155,30);
circle(85,385,30);

setcolor(14);
line(195,125,255,185);
line(255,125,195,185);

line(195,355,255,415);
line(255,355,195,415);


setcolor(6) ;
drawpoly(4,tri);
drawpoly(4,tri1);

setcolor(3) ;
drawpoly(4,star1);
drawpoly(4,star2);

drawpoly(4,stara);
drawpoly(4,starb);






setcolor(8);

if(rectpos==0){
rectangle(c,100,c+110,210);
}
if(rectpos==1){
rectangle(c,330,c+110,440);
}

ch=getch();




if( (ch==75 && c==30) || (ch==77 && c==450)   ){
sound(500);
delay(100);
nosound();
continue;

}


if(ch==75){
c=c-140;
sound(500);
delay(100);
nosound();

}

if(ch==77){
c=c+140;
sound(500);
delay(100);
nosound();

}




if(ch==13 && c==30){

if(rectpos==1 && repeatcol==c){
warning();
continue;
}

cntc = cntc + 1;

}

if(ch==13 && c==170){
if(rectpos==1 && repeatcol==c){
warning();
continue;
}

cntcr = cntcr+1;

}


if(ch==13 && c==310){

if(rectpos==1 && repeatcol==c){
warning();
continue;
}

cntt = cntt + 1;

}

if(ch==13 && c==450){
if(rectpos==1 && repeatcol==c){
warning();
continue;
}

cnts = cnts +1;
}






if(ch==27){
break;
}


}


transition();
return d;

}


void transition(){

sound(300);
delay(100);
nosound();

sound(400);
delay(150);
nosound();

sound(600);
delay(50);
nosound();


}


void transition1(){

sound(2000);
delay(100);
nosound();
}


void tie(){

cleardevice();

time_t t = time(0);
char* dt = ctime(&t);


ofstream f1;
f1.open("winner",ios::ate) ;
f1<<"Tie"<<"                   "<<dt<< endl;

f1.close();


setbkcolor(5);

setcolor(14);
settextstyle(4,HORIZ_DIR,12);
outtextxy(40,150,"It's a Tie");




sound(300);
delay(300);
nosound();

sound(200);
delay(500);
nosound();

sound(300);
delay(800);
nosound();

exit(0);
}

void entersnd(){

int i,j=5;

for(i=5;i<=15;i++){

sound(10*i);
delay(50+j);
nosound();

j+=5;
}


}


void warning(){

cleardevice();


setcolor(5);
rectangle(100,200,500,350);
setfillstyle(1,5);
floodfill(102,202,5);


setcolor(15);
settextstyle(7,HORIZ_DIR,2);
outtextxy(120,210,"Shape Already Selected");
outtextxy(120,290,"Choose Another shape");



for(int i=0;i<2;i++){
for(int t=0;t<2;t++){
delay(100);
sound(5000);
delay(250);
nosound();
}
delay(200);
}

}