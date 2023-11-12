#include<stdio.h>
int main(){
	int day,month;
	printf("nhap ngay thang: ");
	scanf("%d %d",&day,&month);
	
	switch(month){
		case 1:
			if(0<day&&day<20){
				printf("cung ma ket");
			}else{
				printf("cung bao binh");
			}
		break;
		case 2:
			if(0<day&&day<19){
				printf("cung bao binh");
			}else{
				printf("cung song ngu");
			}
		break;	
		case 3:
			if(0<day&&day<21){
				printf("cung song ngu");
			}else{
				printf("cung bach duong");
			}
		break;
		case 4:
			if(0<day&&day<21){
				printf("cung bach duong");
			}else{
				printf("cung kim nguu");
			}
		break;
		case 5:
			if(0<day&&day<21){
				printf("cung kim nguu");
			}else{
				printf("cung song tu");
			}
		break;
		case 6:
			if(0<day&&day<23){
				printf("cung song tu");
			}else{
				printf("cung cu giai");
			}
		break;
		case 7:
			if(0<day&&day<23){
				printf("cung cu giai");
			}else{
				printf("cung su tu");
			}
		break;
		case 8:
			if(0<day&&day<23){
				printf("cung su tu");
			}else{
				printf("cung xu nu");
			}
		break;
		case 9:
			if(0<day&&day<23){
				printf("cung xu nu");
			}else{
				printf("cung thien binh");
			}
		break;
		case 10:
			if(0<day&&day<24){
				printf("cung thien binh");
			}else{
				printf("cung bo cap");
			}
		break;
		case 11:
			if(0<day&&day<23){
				printf("cung bo cap");
			}else{
				printf("cung nha ma");
			}
		break;
		case 12:
			if(0<day&&day<22){
				printf("cung nhan ma");
			}else{
				printf("cung ma ket");
			}
		break;
		default:
      printf("thang khong phu hop!!!");			
	}
}
	

