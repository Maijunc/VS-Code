#include <stdio.h> /*编译预处理命令 */
int main()
{
    int age;
    float assets;
    char pet[30];

    printf("x=%d");
    scanf("%s",pet);
    printf("%d $%.2f %s\n",age,assets,pet);

    return 0;
}