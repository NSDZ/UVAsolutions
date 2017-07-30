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

   char str[128];
   int i = 1;
   while(scanf("%s", str)){
   	if(str[0]=='*') break;
   	else {
		printf("Case %d: Hajj-e-", i++);
	   	if(str[0]=='H') printf("Akbar\n");
	   	else printf("Asghar\n");
		   }
   }
   

   return(0);
}
