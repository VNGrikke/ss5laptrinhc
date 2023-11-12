#include<stdio.h>
#include<math.h>
int main(){
	float a,b;
	printf("nhap doanh thu ban hang(don vi trieu VND):");
	scanf("%f",&a);
	if(a<100){
		b = 0.05*a;
		printf("hoa hong: %f trVND",b);
	}else if(a<300){
		b = 0.1*a;
		printf("hoa hong: %f trVND",b);
	}else if(a>300){
		b = 0.2*a;
		printf("hoa hong: %f trVND",b);
	}
}
