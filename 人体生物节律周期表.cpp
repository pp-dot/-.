#include<stdio.h>
int main(int aygc,const char * argv[])
{
	int year=0,mon=0,day=0;
	int n_year=0,n_mon=0,n_day=0;
	printf("输入出生日期");
	scanf("%d-%d-%d",&year,&mon,&day);
	printf("输入当前日期:");
	scanf("%d-%d-%d",&n_year,&n_mon,&n_day);
	int y1,m1,d1;
	int y2,m2,d2,d3;

	m1=(mon+9)%12;
	y1=year-m1/10;
	d1=365*y1+y1/4-y1/100+y1/400+(m1*365+5)/10+(day-1);

	m2=(n_mon+9)%12;
	y2=n_year-m2/10;
	d2=365*y2+y2/4-y2/100+y2/400+(m2*365+5)/10+(n_day-1);

	d3=d2-d1;
	int W,G,S;
	W=d3%23;
	G=d3%28;
	S=d3%33;
	printf("%d体力i节律",W);
	printf("%d情绪节律",G);
	printf("%d智力节律",S);

	return 0;
}

		
