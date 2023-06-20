#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    int *pointer=&i;
    printf("直接访问变量值：%d\n",i);
    printf("间接访问变量值：%d\n",*pointer);
    printf("直接访问地址：%d\n",&i);
    printf("间接访问地址：%d\n",pointer);
    printf("指针变量地址：%d\n",&pointer);
    return 0;
}
