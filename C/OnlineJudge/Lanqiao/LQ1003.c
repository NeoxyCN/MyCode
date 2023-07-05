// 20230705194322 Wrong Answer - int类型过小
// * 平均值求法,类型大小,输入输出类型格式化
// 1 2 3 4
#include <stdio.h>

int main()
{

    long long int n, sum;
    scanf("%lld", &n);
    sum = ((n + 1)* n/ 2); 
    printf("%lld", sum);
    return 0;
}