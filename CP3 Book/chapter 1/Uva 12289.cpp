//============================================================================
// Name        : Uva 12289.cpp
// Author      : @Nassim_ sbaihia
// Copyright   :
// Description : Uva 12289 solution
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{

   int c;
   scanf("%d", &c);
   while(c--){
   	char number[20];
   	scanf("%s", number);
   	//gets(number);
   	if(strlen(number) > 3)printf("3\n");
   	else if((number[0]=='o' && number[1]=='n')||
   	        (number[1]=='n' && number[2]=='e')||
   	        (number[0]=='o' && number[2]=='e'))
   	  printf("1\n");
   	else
   	  printf("2\n");
   }


   return(0);
}
