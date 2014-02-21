#include<stdio.h>
#define array 10
#define default_1 '+'
extern int goto_encode(void);
extern save_putc(char**,int,int);
extern int goto_decode(void);
extern line_me(int,char);
extern check_passwd(void);
extern ch_passwd(void);
main()
{int a=0,ch=0;
printf("\n");
line_me(80,default_1);
printf("\n\t\t\tWell come to 10-bit enscryption\n");
line_me(80,default_1);

for(;a<1;){
ch=check_passwd();
if(ch!=0){
printf("\n\n\t\t\t1.ENCODE WORD");
printf("\n\t\t\t2.DECODE WORD");
printf("\n\t\t\t3.CHANGE PASSWORD");
printf("\n\n\t\t\tENTER CHOICE           : ");
scanf("%d",&ch);
switch(ch){
case 1:{
a=goto_encode();break;}
case 2:{
a=goto_decode();break;}
case 3:{
a=ch_passwd();break;}
default:{
printf("\n\t\t\t   PROCESS TERMINATED :-)");}}}
else
printf("\n\n\t\t\tPASSWORD INCORRECT TRY AGAIN\n");}
printf("\n");
line_me(80,default_1);
printf("\n\t\t\t\t THANK YOU \n");
line_me(80,default_1);}




