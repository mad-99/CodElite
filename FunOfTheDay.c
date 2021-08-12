
#include<stdio.h>
int dayofweek(int,int ,int);
int main(){
	char day[7][10]={ "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};;
	

	int d,m,y;
	scanf("%d %d %d",&d,&m,&y);
	int i=dayofweek(d,m,y);
	//printf("%d",i);
	printf("%s",day[i]);
	return 0;
}
int dayofweek(int d,int m,int y){
	static int temp[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y -= m<3;
	return(y + y/4-y/100 + y/400 + temp[m-1] + d)%7;
}
