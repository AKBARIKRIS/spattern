#include<stdio.h>
 main()
  {
    char i,j,k;
  	for(i='A';i<='E';i++)
  	  {
  	  	for(k='D';k>=i;k--)
  	  	{
		  printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	  }  
  	
  }
