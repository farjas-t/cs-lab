//3-Search an element in the two dimensional array
#include<stdio.h>
int main(){
  int r, c, item, count=0, array[10][10];
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("Enter %d elements: \n", (r*c));
  for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
      scanf("%d", &array[i][j]);
  printf("Enter the item to find: ");
  scanf("%d", &item);
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      if(array[i][j] == item){
        printf("Item found at [%d, %d] \n", i, j);
        count++;
      }
    }
  }
  if(count==0)
    printf("Item Not found");
  return 0;
}
