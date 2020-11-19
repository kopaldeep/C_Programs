main( )
{
int x=2,y=3,S1,S2 ;
S1=x+(++y);
S2=++x+y++;
printf("%d%d%d%d\n",S1,S2,x,y);
}