#include<stdio.h>
#include<conio.h>
#include<string.h>

int decimal(char);

int main()
   {
	 printf("Name:PATNANA ARUNA KUMARI\n"); 
     printf("ID NUMBER:S170354\n");
     char roman_num[1000];
     int i=0;
     long int num=0;
     printf("\nEnter a roman number :  \n");
     scanf("%s",roman_num);
     while(roman_num[i])
	 {
       if(decimal(roman_num[i])<0)
     {
       printf(" : %c",roman_num[i]);
     }
       if((strlen(roman_num) -i) > 2)
     {
       if(decimal(roman_num[i])<decimal(roman_num[i+2]))
	 {
       printf("");
     }
      }
           if(decimal(roman_num[i])>=decimal(roman_num[i+1]))
           num=num+decimal(roman_num[i]);
     else
          {
            num=num+(decimal(roman_num[i+1])-decimal(roman_num[i]));
            i++;
          }
            i++;
          }
             printf("Its decimal value is : %ld",num);
             getch();
          }
          
             int decimal(char ch)
          {
             int value=0;
             
             switch(ch)
          {
				
             case 'I': value = 1;
             break;

             case 'V': value = 5;
             break;

             case 'X': value = 10;
             break;

             case 'L': value = 50;
             break;

             case 'C': value = 100;
             break;

             case 'D': value = 500;
             break;

             case 'M': value = 1000;
             break;

             case '\0': value = 0;
             break;

             default: value = -1;
        }
            return value;
}
