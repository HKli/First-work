#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,t,s,d,f;
	printf("请输入坐标");
	scanf("%f,%f",&x,&y);
	t=sqrt((x-2)*(x-2)+(y-2)*(y-2));
	s=sqrt((x-2)*(x-2)+(y+2)*(y+2));
	d=sqrt((x+2)*(x+2)+(y+2)*(y+2));
	f=sqrt((x+2)*(x+2)+(y-2)*(y-2));
	if (t<1&&s<1&&d<1&&f<1)    printf("高度为十米");
	else printf("高度为零"); 
}
