#include<stdio.h>
#include<string.h>


int Length(char string[]);

int main() {
   char a[100];
   int len=0;

   printf("Enter the String : ");
   gets(string);

   length = Lengthstring);

   printf("Length of the String is : %d", length);

}

int Length(char string[]) {
   int l= 0;
   while (string[l] !='\0')
   l++;
  return l;
}

