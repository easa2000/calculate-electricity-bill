//program to calculate electricity bill based on the information

#include<stdio.h>
void main(){
	int unit;
	float rate;
	printf("\n Enter the total electricity consumption unit: ");
	scanf("%d",&unit);
	if(unit>=0 && unit <=150){
		rate = unit * 3;
	}else if(unit >= 151 && unit <=350){
		rate = (unit - 150) * 3.75 + 100;
	}else if(unit >= 351 && unit <= 450){
		rate = (unit - 350) * 4 + 250;
	}else if(unit >= 451 && unit <= 600){
		rate = (unit - 450) * 4.25 + 300;
	}else if(unit > 600){
		rate = (unit - 600) * 5 + 400;
	}
	
	printf("\n Consumption of unit = %d",unit);
	printf("\n Charge = %.2f",rate);
}
