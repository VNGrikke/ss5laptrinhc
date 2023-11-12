#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,dt,x1,x2;
	printf("nhap a b c:");
	scanf("%f %f %f",&a,&b,&c);
//	printf("pt cua ban la %d*x*x + %d*x + %d = 0",a,b,c);
	dt = b*b - 4*a*c ;
//	printf("\n%d",dt);
	//a = 0
	if (a==0){
		//b=0,c!=0
		if(b==0&&c!=0){
			printf("phuong trinh vo nghiem!!");
		//b=0,c=0
		}else if(b==0&&c==0){
			printf("phuong trinh vo so nghiem");
			//b!=0, c!=0
		}else{
			x1 = -(c/b);
			printf("phuong trinh co nghiem: %f",x1);
		}
		// a khac 0
	}else{
		//b=0 va c=0
		if(b==0&&c==0){
			printf("phuong trinh co nghiem x=0");
		//b=0 va c!=0
		}else if(b==0&&c!=0){
			//-c/a>0
			if(-c/a>0){
				x1 = sqrt((-c/a));
				x2 = -sqrt((-c/a));
				printf("phuong trinh co nghiem phan biet x=%f, x=%f",x1,x2);
			//-c/a<0
			}else{
				x1 = sqrt((c/a));
				x2 = -sqrt((c/a));				
				printf("phuong trinh co 2 nghiem phuc x=%fi, x=%fi",x1,x2);
			}
		//b!=0,c!=0
		}else{
			//dt<0
			if(dt<0){
				float cdt = sqrt(-dt);
				x1 = b/(2*a);
				x2 = cdt/(2*a);
				printf("phuong trinh co 2 nghiem phuc x=-%f + %fi, x=-%f - %fi",x1,x2,x1,x2);
			//dt=0
			}else if(dt==0){
				x1 = -(b/2*a);
				printf("phuong trinh co nghiem kep x=%f",x1);
			//dt>0
			}else{
				float cdt = sqrt(dt);
				x1 = (-b-cdt)/(2*a);
				x2 = (-b+cdt)/(2*a);
				printf("phuong trinh co 2 nghiem thuc x=%f, x=%f",x1,x2);
			}
		}	
	}
}

