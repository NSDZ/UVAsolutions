//============================================================================
// Name        : Uva 12577.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 12577 solution
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

   
   //44
   char str[128];
   int i = 1;
   while(scanf("%s", str) != '*'){
   	printf("Case %d: Hajj-e-", i++);
   	if(str[0]=='H') printf("Akbar\n");
   	else printf("Asghar\n");
   }

   return(0);
}
