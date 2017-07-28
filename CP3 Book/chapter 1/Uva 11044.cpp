//============================================================================
// Name        : Uva 11044.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 11044 solution
//============================================================================
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tCases;
   scanf("%d", &tCases);
   while(tCases--) {
	   int n, m;
	   scanf("%d %d", &n, &m);
	   printf("%d\n", (n/3)*(m/3));
   }
   return(0);
}


