#include<stdio.h>
#include<conio.h>
#define size 2
struct student{
int roll_no;
char name[20];
int age;
int marks[3];
int total;
};
void main()
{
int i,c;
static struct student s[size];
clrscr();
for(i=0;i<size;i++)
{
printf("Enter Student %d details:\n",i+1);
printf("Enter roll number:\t");
scanf("%d",&s[i].roll_no);
printf("Enter name:\t");
scanf("\n");
gets(s[i].name);
printf("Enter age:\t");
scanf("%d",&s[i].age);
s[i].total=0;
printf("Enter marks:\n");
for(c=0;c<3;c++){
scanf("%d",&s[i].marks[c]);
s[i].total+=s[i].marks[c];}
for(c=0;c<32;c++)
printf("=");
printf("\n");
}
clrscr();
printf("\n\n\t\t\tStudent Record\n\n");
for(i=0;i<size;i++)
{
printf("Student %d details:\n\n",i+1);
printf("Roll number:\t");
printf("%d\n",s[i].roll_no);
printf("Name:\t");
puts(s[i].name);
printf("Age:\t");
printf("%d\n",s[i].age);
printf("Marks in:\n");
for(c=0;c<3;c++)
printf("  Sub%d:\t%d\n",c+1,s[i].marks[c]);
printf("Total:\t%d\n\n",s[i].total);
for(c=0;c<32;c++)
printf("=");
printf("\n\n");
}
getch();
}