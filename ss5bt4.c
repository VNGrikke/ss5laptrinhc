#include<stdio.h>
float main(){
	float a,b,c;
	printf("nhap vao luong thang khong thue(don vi trieu VND):");
	scanf("%f",&a);
	if(0<a&&a<=5){
		b= a*0.05;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else if(a<=10){
		b= a*0.1;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else if(a<=18){
		b= a*0.15;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else if(a<=32){
		b= a*0.20;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else if(a<=52){
		b= a*0.25;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else if(a<=80){
		b= a*0.30;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}else{
		b= a*0.35;
		c= a-b;
		printf("luong thuc te: %ftr VND",c);
		printf("\nthue: %ftr VND",b);
	}
}
