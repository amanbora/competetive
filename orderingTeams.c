#include<stdio.h>
int main()
{
  int t,t1=0,t2=0;
  scanf("%d",&t);
  for(int i=1;i<=t; i++){
    int s1[3],s2[3],s3[3],sum1=0,sum2=0,sum3=0;
    for(int j=0;j<3;j++){
      scanf("%d",&s1[j]);
      sum1=sum1+s1[j];
     }
  for(int j=0;j<3;j++)
    {   scanf("%d",&s2[j]);
    sum2=sum2+s2[j];
    }
  for(int j=0;j<3;j++)
    {  scanf("%d",&s3[j]);
    sum3=sum3+s3[j];
    }
  if(sum1>sum2)
    {


                    if(sum1>sum3 && sum2>sum3)
                    { for(int i=0;i<3;i++){
                        if(s1[i]>=s3[i] && s2[i]>=s3[i] && s1[i]>=s2[i])
                          t1++;
                        else{
                          t1=0;
                          break;
                          }
                      }
                     if(t1>0)
                      printf("yes");
                     else
                      printf("no");
                    }
                    else if(sum1>sum3 && sum3>sum2)
                    {
                      for(int i=0;i<3;i++){
                          if(s1[i]>=s2[i] && s3[i]>=s2[i] && s1[i]>=s3[i])
                            t1++;
                          else{
                            t1=0;
                            break;
                            }
                        }
                       if(t1>0)
                        printf("yes");
                       else
                        printf("no");
                    }
                    else if(sum3>sum1)
                     { for(int i=0;i<3;i++){
                         if(s3[i]>=s1[i] && s1[i]>=s2[i])
                           t1++;
                         else{
                           t1=0;
                           break;
                          }
                       }
                       if(t1>0)
                        printf("yes");
                       else
                        printf("no");
                    }
                    else
                      printf("no");
      }
  else
    {


                    if(sum2>sum3 && sum3<sum1 && sum2!=sum1)
                    {
                      for(int i=0;i<3;i++){
                          if(s2[i]>=s3[i] && s2[i]>=s1[i] && s1[i]>=s3[i])
                            t2++;
                          else{
                            t2=0;
                            break;
                           }
                         }
                        if(t2>0)
                           printf("yes");
                        else
                           printf("no");
                    }
                    else if(sum2>sum3 && sum3>sum1 && sum2!=sum1)
                    {
                      for(int i=0;i<3;i++){
                          if(s2[i]>=s3[i] && s2[i]>=s1[i] && s3[i]>=s1[i])
                            t2++;
                          else{
                            t2=0;
                            break;
                           }
                         }
                        if(t2>0)
                           printf("yes");
                        else
                           printf("no");
                    }
                    else if(sum3>sum2 && sum2!=sum1)
                     {
                       for(int i=0;i<3;i++){
                           if(s3[i]>=s2[i] && s2[i]>=s1[i])
                             t2++;
                           else{
                             t2=0;
                             break;
                            }
                          }
                         if(t2>0)
                            printf("yes");
                         else
                            printf("no");

                     }
                     else
                       printf("no");
     }
     printf("\n");
  }
  return 0;
}
