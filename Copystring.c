// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
char str1[100],str2[200];
printf("enter the string:");
scanf("%s",str1);
printf("enter the string:");
scanf("%s",str2);
strcpy(str1,str2);
printf("%s",str2);
}
