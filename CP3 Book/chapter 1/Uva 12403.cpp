//============================================================================
// Name        : Uva 12403.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 12403 solution
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

   
   int n = 0, c;
   scanf("%d", &c);
   while(c--){
	   char str[24];
	   scanf("%s", str);
	   if(str[0]=='d') {
		   	int tmp;
			scanf("%d", &tmp);
		   	n += tmp;
	   }
	   else printf("%d\n", n);
   }

   return(0);
}
