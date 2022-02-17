#include<stdio.h>
int main()
{
    int L,B,W,C,area,Test_Cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W||B<=W+W)
    {
        printf("Impossible");
    }
    else
    {
      area=L*B-((L-2*W)*(B-2*W));
      Test_Cost=area*C;
      printf("%d
",Test_Cost);
      return 0;
    }
}