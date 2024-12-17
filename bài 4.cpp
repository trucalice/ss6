#include<stdio.h>
#include<math.h>
int main(){
	printf("nhap vào pt a,b,c \n");
	float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float delta = b*b - 4*a*c;	
	if(delta < 0){
		printf("\n PT vo nghiem");
	}else if(delta == 0){
		printf("\npt co nghiem kep x = %.2f",(-b)/2*a);
	}else{
		printf("\npt co nghiem x1 = %.2f",(-b-sqrt(delta))/(2*a));
		printf("\npt co nghiem x2 = %.2f",(-b+sqrt(delta))/(2*a));
	}
	return 0;
}

