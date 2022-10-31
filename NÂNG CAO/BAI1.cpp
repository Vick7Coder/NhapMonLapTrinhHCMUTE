#include <string.h>
#include <stdio.h>

int main()
{
   char hoten[80];
   printf("nhap ho ten: ");
   gets(hoten);
   char *token;
   token = strtok(hoten, " ");
   int c=0;
   char mang[100][15];
   while( token != NULL )
   {
     strcpy(mang[c],token);
      c++;
      token = strtok(NULL, " ");
   }
   for (int i=c-1;i>=0;i--){
    printf("%s ",mang[i]);
   }
   return(0);
}
