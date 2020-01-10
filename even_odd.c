#include <stdio.h>

int Even(int x)
{
   if((x%2)==0)
      {
          printf("The number is even.");
      }
   else
    {
        printf("The number is odd.");
    }

}

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    Even(a);

    return 0;
}
