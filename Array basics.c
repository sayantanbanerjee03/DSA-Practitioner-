#include <stdio.h>
int main (){

int a[1000],i,size ;
printf("enter the array size you want to write :-");
scanf("%d", &size);


printf("enter the elements you want to add \n");
for (i=0;i<size;i++){
scanf("%d",&a[i]);
}	

printf("the elements you have entered are ");
for (i=0;i<size;i++){
	printf("%d \t",a[i]);
}
return 0;
}
