#include<stdio.h>
#include<math.h>

int main()
{
    int count; //计数
    int den; //分母
    int mol; //分子
    int fmlde;//前一项分母
    int fmlmo;//前一项分子
    int n;  //项数
    float answer=0;
    float sum=0;

    printf("请输入你的n");
    printf("\nn=");
    scanf("%d",&n);

    for (den=1,mol=1,count=1; count<=n; count++)
    {
        if (count%2==1) //奇数
        {
            answer=(float)mol/den;
            sum=sum+answer;
            fmlde=den;
            fmlmo=mol;
            mol=den;
            den=fmlde+fmlmo;
            //printf("%.2f\n",sum);

            //mol=den; //分子等于分母
        }
        //if(fmod(n,2)==0) //偶数
        else
        {
            
            answer=-(float)mol/den;
            sum=sum+answer;
            fmlde=den;
            fmlmo=mol;
            mol=den;
            den=fmlde+fmlmo;
            //printf("%.2f\n",sum);
        }
        

    }
    
        printf("sum=%.2f\n",sum);

        return 0;

}