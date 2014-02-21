#include<stdio.h>
#include<malloc.h>
#define write "w"
#define read "r"

FILE *dir;
void save_putc(char **h,int x,int y){
dir=fopen("format_file.txt",write);
int i,j;
for(i=0;i<x;i++){
for(j=0;j<y;j++)
fputc(*(h[i]+j),dir);}
fclose(dir);
printf("\n\t\t\t...Successfully saved to file...\n");}

char* get_scanf(int a){
char *h;
h=(char*)malloc(a);
dir=fopen("format_file.txt",read);
fscanf(dir,"%s",h);
return h;}

char* get_getc(int a){
char *h;int i;
h=(char*)malloc(a);
dir=fopen("format_file.txt",read);
for(i=0;i<a;i++)
*(h+i)=fgetc(dir);
return h;}
void save_printf(char *p){
dir=fopen("passwd.txt",write);
fprintf(dir,"%s",p);
}


