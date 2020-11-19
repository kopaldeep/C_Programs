#include<stdio.h>
#include<conio.h>
#define size 10
void display(int *mat,int r,int c){
int i,j;
for(i=0;i<r;i++){
for(j=0;j<c;j++)
printf("%d\t",*(mat+i*c+j));
printf("\n");
}
}
void add(int *mat1,int *mat2,int r1,int r2,int c1,int c2){
int i,j;
int mat3[size][size];
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
mat3[i][j]=(*(mat1+i*c1+j))+(*(mat2+i*c1+j));
display(mat1,r1,c1);
printf("Result is:\n\n");
display(mat3,r1,c1);
}
void sub(int *mat1,int *mat2,int r1,int r2,int c1,int c2){
int i,j;
int mat3[size][size];
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
mat3[i][j]=(*(mat1+i*c1+j))-(*(mat2+i*c2+j));
printf("%d\t",mat3[i][j]);
}
printf("\n");
}
printf("Result is:\n\n");
display(mat3,r1,c1);
}
void mul(int *mat1,int *mat2,int r1,int r2,int c1,int c2){
int i,j;
int mat3[size][size];
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
mat3[i][j]=(*(mat1+i*c1+j))+(*(mat2+i*c2+j));
printf("Result is:\n\n");
display(mat3,r1,c1);
}
void main()
{
int mat1[size][size],mat2[size][size],r1,r2,c1,c2,ch,i,j;
clrscr();
printf("Enter the order of matrix1(mxn):\t");
scanf("%d%d",&r1,&c1);
printf("Enter the elements of matrix1:\n");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++){
printf("Element[%d][%d]:\t",i+1,j+1);
scanf("%d",&mat1[i][j]);}
printf("Enter the order of matrix2(mxn):\t");
scanf("%d%d",&r2,&c2);
printf("Enter the elements of matrix2:\n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++){
printf("Element[%d][%d]:\t",i+1,j+1);
scanf("%d",&mat2[i][j]);}
clrscr();
printf("\n\nWhat operation is to be performed?\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(r1 !=r2 && c1!=c2)
printf("Addition on matrices is not defined");
else
add(mat1,mat2,r1,r2,c1,c2);
break;
case 2:
if(r1 !=r2 && c1!=c2)
printf("Subtraction on matrices is not defined");
else
sub(mat1,mat2,r1,r2,c1,c2);
break;
case 3:
if(r1 !=c2 && c1!=r2)
printf("Multiplication on matrices is not defined");
else
mul(mat1,mat2,r1,r2,c1,c2);
break;
default:
printf("Wrong Choice!!");
}
getch();
}