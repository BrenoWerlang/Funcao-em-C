#include <stdio.h>

float soma (float l1,float l2,float l3,float s){
	
	 if (l1!=l2&&l1!=l3&&l2==l3){
	
	s=1;
		return s;
	}
		 if (l2!=l3&&l2!=l1&&l1==l3){
	
	s=1;
		return s;
	}
		 if (l3!=l2&&l3!=l1&&l2==l1){
	
	s=1;
		return s;
	}
	if (l1==l2&&l1==l3&&l2==l3){
	
	 s=0;
	 
	 
		return s;
}
	if (l1!=l2&&l1!=l3&&l2!=l3){
		
		s=2;
		
		return s; 
	}
	
	
}

int main (){
	
	float a,b,c,d;
	
	printf("De o primeiro lado\n");
	scanf("%f",&a);
	fflush(stdin);
	
	printf("De o primeiro lado\n");
	scanf("%f",&b);
	fflush(stdin);
	
	printf("De o primeiro lado\n");
	scanf("%f",&c);
	fflush(stdin);
	
	float r=soma(a,b,c,d);
	
		if(r==0){
		printf("equilatero\n",r);
	}
	
		else	if(r==1){
		printf("isoceles\n",r);
	}
		else	if(r==2){
		printf("escaleno\n",r);
	}
	return 0;
}
