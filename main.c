#include <stdio.h>
#include <math.h>
#include "max.h"
#include "min.h"
#include "var.h"
int main()
{
        int n =7;
        int t[]={13,12,5,1,19,13,17};
        int val_max;
	int val_min;
	float varia;
        max(t,n,&val_max);
	min(t,n,&val_min);
	variance(t,n,&varia);
        printf("La valeur maximale présente dans le tableau est : %d \n ", val_max) ;
	printf("La valeur minimale présente dans le tableau est : %d \n ", val_min);
	if (ceil(varia)-varia < varia - floor(varia))
		printf("La valeur de la variance de ce tableau est : %f \n ",ceil(varia)); 
        else if (ceil(varia)-varia < varia - floor(varia))


		printf("La valeur de la variance de ce tableau est : %f \n ",floor(varia)); 
	else
		printf("La valeur de la variance de ce tableau est : %f \n ",varia);


	return 0;
}


