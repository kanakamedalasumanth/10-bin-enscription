#include<stdio.h>
#include<malloc.h>
#define pass 1
#define fail 0
#define write "w"
#define read "r"
#define array 10
int check_me1(char*,char*);
int count(char*);
int ch_passwd(void);
FILE *dir;
int i,j,*temp;char *passwd,*usr_passwd;
int check_passwd(void){
/*Allocating*/
temp=(int*)malloc(12);
usr_passwd=(char*)malloc(array);
printf("\n\n\t\t\t ENTER PASSWORD    : ");
scanf("%s",usr_passwd);
passwd=(char*)malloc(array);
dir=fopen("pass.sumo",read);
fread(passwd,1,10,dir);
*(temp+0)=check_me1(passwd,usr_passwd);
free(passwd);
free(usr_passwd);
fclose(dir);
i=*(temp+0);
free(temp);
return i;}



int ch_passwd(void){
char *passwd1;
passwd1=(char*)malloc(10);
printf("\n\n\t\t\tENTER NEW PASSWD : ");
scanf("%s",passwd1);
dir=fopen("pass.sumo",write);
fwrite(passwd1,1,10,dir);
fclose(dir);
free(passwd1);
printf("\n\t\t\tSUCCESSFULLY CHANGED\n\n");
return pass;}

int check_me1(char *p,char *q){
int a=0;
*(temp+1)=count(p);
for(i=0;i<*(temp+1);i++){
if((*(p+i)==*(q+i))){
a+=1;}}
if(a==*(temp+1)){
return pass;}
else return fail;}


int count(char *p){
int a=0;
for(i=0;i<array;i++){
if(*(p+i)!=0){
a+=1;}
else 
break;}
return a;}





