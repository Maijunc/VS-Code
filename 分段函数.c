#include <stdio.h> /*编译预处理命令 */
#include<math.h>//好好学数学

int main()
{
float X;//float在%f中不需要加l double在%f中需要加l 其意思是相同的意思 long double 要加两l；
float Y;

printf("输入你的X\n");

printf("X=");

scanf("%f",&X);//X前的&不能少；

//printf("Y=");

if (X<=0)
{
    //printf("%f",Y);
   Y=pow(X,5)+2*X+pow(X,-1);
}
else
{

Y=sqrt(X);
}
//printf("%f",X);

printf("Y=%.2f\n",Y) ;
//printf("%.2f",X);

return 0;

}