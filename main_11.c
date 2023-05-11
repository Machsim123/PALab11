#include "functii_11.h"

int main()
{
	srand(time(NULL));
	char v[15]={'u','z','v','u','z','x','v','x','u','y','z','z','v','x'}, vc[4]={'u','z','v'};
	int i, nr=0, j, ok0=-1, ok1=-1, ok2=-1;
	for(i=0;i<15;i++)
	{
		if(v[i]==vc[0] || v[i]==vc[1] || v[i]==vc[2]);
		   else
		   {
		   	ok0=0;
		   	ok1=0;
		   	ok2=0;
		   	nr++;
		   	for(j=i+1;j<15;j++)
		   	{
			if(v[j]==vc[0]) ok0=1;
		   	else if(v[j]==vc[1]) ok1=1;
		   	else if(v[j]==vc[2]) ok2=1;
		   	if(ok0==ok1 && ok0==1)      {vc[2]=v[i]; break;}
		   	else if(ok0==ok2 && ok0==1) {vc[1]=v[i]; break;}
		   	else if(ok1==ok2 && ok1==1) {vc[0]=v[i]; break;}
		   }
		   }
		printf("%c %c %c\n",vc[0],vc[1],vc[2]);
		///printf("%d\n\n",nr);
	}
	printf("\n \n");
	printf("Numarul de cache miss este: %d\n",nr-1+3);
	
	///sfarsit pb 1
	printf("INCEPE PB 2: \n\n");
	char vc2[4]={'u','z','v'};
	nr=0;
	int nr0=0, nr1=0, nr2=0;
	for(i=0;i<15;i++)
	{
		if(v[i]==vc2[0] || v[i]==vc2[1] || v[i]==vc2[2]);
		else
		{
		nr0=0;
		nr1=0;
		nr2=0;
		nr++;
		   	for(j=0;j<i;j++)
		   	{
			if(v[j]==vc2[0]) nr0++;
		   	else if(v[j]==vc2[1]) nr1++;
		   	else if(v[j]==vc2[2]) nr2++;
		   	}
		if(nr0 > nr1 && nr0 > nr2)      vc2[0]=v[i];
		else if(nr1 > nr0 && nr1 > nr2) vc2[1]=v[i];
		else if(nr2 > nr1 && nr2 > nr0) vc2[2]=v[i];
		else vc2[rand()%3]=v[i];
	    }
	    printf("%c %c %c\n",vc2[0],vc2[1],vc2[2]);
	}
	printf("NUMAR DE MISS CACHE: %d",nr-1+3);
	return 0;
}
