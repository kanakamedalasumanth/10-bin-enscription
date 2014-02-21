#include<stdio.h>
#include<malloc.h>
#define x 10
#define find_key(a) a+11
#define pass 1
extern char *get_getc(int);
extern char* get_scanf(int);
void fill_keys(int*,int);
void check_me(int *);
void save_printf(char*);
char *hold,*data;;int i,j,*c,*keys,*temp;
int goto_decode(void){
/*Creating*/
c=(int*)malloc(8);
/*Using getc method*/
hold=get_getc(11*10);
keys=(int*)malloc(40);
data=(char*)malloc(10);
temp=(int*)malloc(4);
/*Fin*/
*(c+0)=0;
*(c+1)=10;
check_me((c+0));
fill_keys((keys+0),*(c+0));
*(c+1)=0;
*(temp+0)=*(keys+0);
for(i=0;i<*(c+0);i++){
*(data+i)=*(hold+*(temp+0));
*(c+1)=find_key(*(c+1));
*(temp+0)=*(c+1);
*(temp+0)+=*(keys+(i+1));}

for(i=0;i<*(c+0);i++)
*(data+i)-=1;
printf("\n\t\t\t1.SHOW IN TERMINAL\n\t\t\t2.SAVE AS A FILE");
printf("\n\n\t\t\tENTER CHOICE           :");
scanf("%d",(c+1));
switch(*(c+1)) {
case 1: {
printf("\n\n\t\t\tPASSWD : $$$(%s)$$$",data);
printf("\n\n\t\t\t(-: SUCCESSFULLY DECODE :-)\n");
break;}
case 2: {
save_printf((data+0));printf("\n\n\t\t\t(-: SUCCESSFULLY DECODE :-)\n");
break;}
default:{
printf("\n\t\t\t   PROCESS TERMINATED :-)");break;}}
free(hold);
free(keys);
free(data);
free(temp);
free(c);
return pass;
}

void fill_keys(int *a,int count){
for(i=0;i<count;i++){
*(a+i)=*(hold+*(c+1));
*(c+1)=find_key(*(c+1));}}

void check_me(int *tot){
for(i=0;i<109;i++){
if((*(hold+i)!=(-1)))
*(tot+0)+=1;
else break;}
(*(tot+0))/=x;}





