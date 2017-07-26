//============================================================================
// Name        : Uva 11498.cpp
// Author      : @Nassim_ sbaihia
// Copyright   : 
// Description : Uva 11498 solutioin
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k, ox, oy, x, y;
   while(scanf("%d", &k) && k){
   	scanf("%d %d", &ox, &oy);
   	while (k--){
   		scanf("%d %d", &x, &y);
   		if(oy==y || ox==x) printf("divisa\n");
   		else {
   			if(y > oy) printf("N");
   			else printf("S");
   			if(x > ox) printf("E\n");
   			else printf("O\n");
		   }
	   }
   }

   return(0);
}


