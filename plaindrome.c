#include <stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the val of a :");
scanf("%d",&a);
printf("Enter the val of b :");
scanf("%d",&b);
printf("Enter the val of c:");
scanf("%d",&c);
printf("Enter the val of d :");
scanf("%d",&d);

if(a==d&&c==b){
    printf("plaindrome");
}
else{
    printf("not palindrome");
}

return 0;

}