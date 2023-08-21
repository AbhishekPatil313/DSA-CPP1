#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0;
 char databits[50];

 printf("Enter Data Charactres: ");
 scanf("%s",databits);

 printf("Data Byte Before Bit Stuffing:%s",databits);

 printf("\nData Byte After Bit stuffing :");
 printf(" Flag ");

 for(i=0; i<strlen(databits); i++)
 {
    if(databits[i]=='e' && databits[i+1]=='s' && databits[i+2]=='c')
    {
        printf("   esc e");
    }
    else if(databits[i]=='f' && databits[i+1]=='l' && databits[i+2]=='a')
    {
        printf(" esc flag f");
    }
    else
        printf("%c",databits[i]);
 }
  printf(" Flag ");
 return 0;
}