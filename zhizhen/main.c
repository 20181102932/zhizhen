//
//  main.c
//  zhizhen
//
//  Created by s20181102932 on 2019/9/3.
//  Copyright © 2019 wjx. All rights reserved.
//
#include<stdio.h>
int main( )
{
    int a[5]={0};
    int i=0,j=0,middle=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int *x=a;
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
         {
             if(a[j]>a[j+1])
             {
                 middle=a[j+1];
                 a[j+1]=*x;
                 a[j]=middle;
             }
             x++;
         }
            x=a;
     }
     for(i=0;i<5;i++)
     {
         printf("%d ",a[i]);
     }
    return 0;
}
