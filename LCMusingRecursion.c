#include<stdio.h>

int find_lcm(int, int);   // function prototype declaration

int main()
{
    int a, b, lcm;
    printf("Input first number : \n");
    scanf("%d",&a);
    printf("Input second number : \n");
    scanf("%d",&b);
    lcm = find_lcm(a,b);
    printf("LCM of %d and %d = %d", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
