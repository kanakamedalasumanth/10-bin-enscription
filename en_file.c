#include<stdio.h>
#include<malloc.h>
#define mem_space 1
#define x 10
#define y 11
#define con_no 10
#define pass 1

/*Global declarations*/
char *name,**temp_mem;
int i,j,*temp,*str_no;

/*Function declarations*/
void check_str(int*,char*);
int goto_encode(void);
void goto_bit(char);
void create_2d(char***);
extern save_putc(char**,int,int);

/*Started program*/
int goto_encode(void){
create_2d(&temp_mem);
/*Allocating mem*/
str_no=(int*)malloc(4);
name=(char*)malloc(10*mem_space);
temp=(int*)malloc(12);
/*Fin aloc*/
printf("\t\t\tEnter your password    : ");
scanf("%s",name);
check_str(str_no,name);
printf("\n\t\t\tEncoding please wait....\n");
*(temp+1)=0;*(temp+2)=10;
for(i=0;i<*str_no;i++)
goto_bit(*(name+i));
save_putc(temp_mem,*str_no,y);
free(str_no);
free(temp_mem);
free(temp);
free(name);
return pass;}

/*Dis will fill the array & 10-bit method*/
void goto_bit(char a){
int i,j,q=a;
*(temp+0)=a%con_no;
*(temp_mem[*(temp+1)]+*(temp+0))=a+1;
*(temp_mem[*(temp+1)]+x)=*(temp+0);
for(i=0;i<*(temp+0);i++){
(i/2)?(q+=*(temp+0)):(q+=*(temp+1)+1);
*(temp_mem[*(temp+1)]+i)=q;}
for(i=*(temp+0)+1;i<x;i++){
(i%2)?(q-=*(temp+0)):(q-=*(temp+1)+1);
*(temp_mem[*(temp+1)]+i)=q;}
(*(temp+1))++;}

void create_2d(char ***p){
int i,a;
*(p+0)=(char**)malloc(sizeof(char*)*x);
for(i=0;i<x;i++)
*(p[0]+i)=(char*)malloc(sizeof(char)*y);
printf("\n\t\t\t<<Using %d bytes temporary>>\n\n",a=((sizeof(char)*y)*x));}

void check_str(int *put,char *name){
int a,i,j;
*put=0;
for(i=0;i<x;i++){
if(*(name+i)!=0){
*(put+0)+=1;}
else break;}}
