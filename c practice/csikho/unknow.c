#include <stdio.h>

int main()
{
    int a = 3.2;
    int b = 4;

    printf("The value of a+b is:%d\n", a + b);
    printf("The value of a+b is:%d\n", a - b);
    printf("The value of a+b is:%d\n", a * b);
    printf("The value of a+b is:%d\n", a / b);

    int z;
    z = b * a;
    printf("The value if 6 and 5 is %d\n", 6 + 5);
    printf("The value if 6 and 5.1 is %f\n", 6 + 5.1);
    printf("The value if 6.2 and 5.4is %f\n", 6.2 + 5.4);
    printf("The value if 6.2/9 %f\n", 6.2/9);
    printf("The value of the a and b is %f\n",a+b);
    scanf("%d%d\n",&a,&b);
    printf("find where is no is prime number is not");
    if(a%2=0){
        printf("it is even no");
     } else(){
        printf("it is not even");
    
     }
    return 0;
}