//program to sort n names in alphabetic order
#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   char str[100][100],t[100];
   printf("Enter number of names :\n");
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(t,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],t);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}
