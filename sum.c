#include <stdio.h> /*编译预处理命令 */
int main()
{
    int i,sum;
    int count;
    int average;
    for(i=1,count=0,sum=0;count<50;i++)
        if(i%2==1)
        {
            printf("i=%d\n",i);//调试
            sum=sum+i; 
            printf("sum=%d\n",sum);//调试
            count++; 
        }
    average=sum/count;
    printf("sum=%d count=%d average=%d\n",sum,count,average);
    return 0;        
}