#include<stdio.h>
void change(int [],int );
int main(){
  int arr[3]={1,2,3};
  int a=6;
  change(arr[0],a);
  printf("%d myajsjks \n %d",arr[0],a);
}
void change(int myarr[],int p)
{
  p=22;
  myarr[0]=400;

}
