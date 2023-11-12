#include<stdio.h>
float main(){
	float monthlySubscription,minute;
	monthlySubscription = 25000;
	printf("so phut goi trong thang:");
	scanf("%f",&minute);
	if(minute<=50){
		float amountDues = minute*600 + monthlySubscription;
		printf("so tien phai tra trong 1 thang la: %f",amountDues);
	}else if(minute<=200){
		float amountDues = 50*600 + (minute-50)*400 + monthlySubscription;
		printf("so tien phai tra trong 1 thang la: %f",amountDues);
	}else if(minute<=400){
		float amountDues = 50*600 + 150*400 + (minute-200)*200 + monthlySubscription;
		printf("so tien phai tra trong 1 thang la: %f",amountDues);
	}else{
		float amountDues = 50*600 + 150*400 + 200*200 + (minute-400)*100 + monthlySubscription;
		printf("so tien phai tra trong 1 thang la: %f",amountDues);
	}
}
