main(){
float temp[3][2]={{13.4,45.5},{16.6,47.8},{20.2,40.8}};
printf("\n%u\n",temp);
printf("\n%u\n",temp+2);
printf("\n%f\n",*(temp+1));
printf("\n%u\n",(*(temp+2)+1));
printf("\n%f\n",*(*(temp)+1)+1);
printf("\n%f\n",*(*(temp+2)));
}