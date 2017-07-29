//============================================================================
// Name        : Uva 12372.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 12372solution
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

   int c;
   scanf("%d", &c);
   for(int i=1; i<=c;i++) {
   	printf("Case %d: ", i);
   	int l,w,h;	scanf("%d %d %d",&l,&w,&h);
   	if(l>20 || w>20 || h>20) printf("bad\n");
   	else printf("good\n");
   }


   return(0);
}
