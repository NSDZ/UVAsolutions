//============================================================================
// Name        : Uva 11364.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 11364 solution
//============================================================================
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tCases;
   scanf("%d", &tCases);
   while(tCases--) {
	   int stores, tmp, max = -999, min = 999;
	   scanf("%d", &stores);
	   for(int i = 0; i < stores; i++) {
		   scanf("%d", &tmp);
		   min = (tmp < min) ? tmp : min;
		   max = (tmp > max) ? tmp : max;
	   }
	   printf("%d\n", (max-min)*2);
   }
   return(0);
}
