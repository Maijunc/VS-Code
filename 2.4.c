#include <stdio.h> /*编译预处理命令 */
#include<math.h>//好好学数学

int main()
{
    float n;
    float N;
    float answer;
    float sum;

    printf("请输入你的n\n");

    printf("n=");

    scanf("%f",&N);

    //answer=n+1;//1/(2*n-1);
    //输入了N=7  for n<=7 当n=1 answer=1 n=2 answer=2/3 
for(sum=0,n=1;n<=N;n++)
{


    if (fmod(n,2)==1)//float型只能与int型相除，若要浮点型相除需fmod（x，y）==z
    {
        answer=1/(2*n-1);
        //printf("%f\n",answer);
        sum=sum+answer;
    }
    
    else
    {
       answer=-1*1/(2*n-1);
       //printf("%f\n",answer);
        sum=sum+answer;
    }



}
    printf("sum=%.2f\n",sum);
        return 0;











}