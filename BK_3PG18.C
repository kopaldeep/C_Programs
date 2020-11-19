#include<stdio.h>
main(){
union{
	struct{
		char x;
		char y;
		char z;
		char w;
		}xyz;
	struct{
		int p;
		int q;
		}pq;
		long a;
		float b;
		double d;
		}prq;
	printf("%d",sizeof(float));
	}