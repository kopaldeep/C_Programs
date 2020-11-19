#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char fname[15],lname[15];
int ssn_no,age;
FILE *fp;
clrscr();
if((fp=fopen("person.dat","w"))!=NULL){
while(1){
printf("Enter First Name:\t");
gets(fname);
if(strcmp(fname,"EXIT")==0)
{
fclose(fp);
exit(0);
}
printf("Enter Last Name:\t");
gets(lname);
printf("Enter SSN Number:\t");
scanf("%d",&ssn_no);
printf("Enter Age:\t");
scanf("%d",&age);
fflush(0);
fprintf(fp,"%s %s %d %d\n",fname,lname,ssn_no,age);
}
}
else
printf("File Access Error!");
getch();
}