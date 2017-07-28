//============================================================================
// Name        : Uva 12279.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 12279 solution
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

   int c, i = 1;
   while(scanf("%d", &c) && c){
	   int tmp, Yes = 0, No = 0;
	   for(int i =0; i < c; i++) {
	   scanf("%d", &tmp);
	   if (tmp) No++;
	   else Yes++;
	   }
	   printf("Case %d: %d\n", i++, No-Yes);

   }


   return(0);
}
