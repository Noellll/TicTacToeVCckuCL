#include <stdio.h>
#include <stdlib.h>
int main(){
	int **arr;
	char **pam;
	int r,s;
	int i,y;
	int odstranene_cislo;
	int cislo;
	int vstup,neparne;
	printf("Zadajte velkost pola X Y:");
	scanf("%d %d",&r,&s);
	arr = (int **)malloc(r * sizeof(int*));
	pam = (char **)malloc(r * sizeof(char*));
	for(i=0;i<r;i++){
		arr[i] = (int *)malloc(s* sizeof(int));
		pam[i] = (char *)malloc(s * sizeof(char));
		for(y=0;y<s;y++){
			if((cislo/10) <1){	
		printf("%d  ",cislo);
		cislo++;
	     }
	     else{
	     	printf("%d ",cislo);
		    cislo++;
		 }
	  }
		printf("\n");
	}
	while(1){
		cislo=0;
		neparne++;
		if(neparne%2==1)
		printf("1:");
		else
		printf("2:");
		if(scanf("%d",&vstup)!=0){
			for(i=0;i<r;i++)
			  for(y=0;y<s;y++){
			  	if(cislo==vstup){
				if(neparne%2==1){
				
			  	pam[i][y]='x';
			  	arr[i][y] = 11111;
			    }
			    else{
			    	pam[i][y]='o';
			  	arr[i][y] = 11111;
				}
			  	odstranene_cislo = cislo;
			  }
			  	cislo++;
			  }
			  
			  //////////////////////////Vypisanie/////////////////////
			  cislo = 0;
		for(i=0;i<r;i++){
		for(y=0;y<s;y++){
		    if(arr[i][y]==11111){
		    	if((odstranene_cislo/10)<1){
		    	printf("%c  ",pam[i][y]);
		    	cislo++;
		      }
		      else{
		      	printf("%c  ",pam[i][y]);
		    	cislo++;
			  }
		    	continue;
			}
			if((cislo/10) <1){	
		         printf("%d  ",cislo);
		         cislo++;
	     }
	     else{
	     	    printf("%d ",cislo);
		        cislo++;
		      }
	    
	       } //koniec y ciklu
		printf("\n");
	      }
		} //koniec scanf kontroli
		else
		return 0;
	}
	
	
	return 0;
}
