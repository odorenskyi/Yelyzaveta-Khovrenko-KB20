#include "moduleskhovrenko.h"
#include <cmath>


double s_calculation(float x, float z)
{
    double S = pow(3*sin(sqrt((12*pow(x,2))/log10(x-3))),2)+(z/2);
    return S;
}

task_9_1 Bonus9_1(double price)
{
    task_9_1 task;
if (price < 100)
        task.bonus = 0;
    else
        if (price>=100 && price<200)
        task.bonus = 1;
    else
        if (price>=200 && price<500)
        task.bonus = 5;
    else
        if (price>=500 && price<1000)
        task.bonus = 10;
    else
        if (price>=1000 && price<2500)
        task.bonus = 50;
    else
        if (price>=2500 && price<5000)
        task.bonus = 150;
    else
        task.bonus = 300;
   task.pay = price - task.bonus*0.25;
   return task;
}
float Temperature9_2(float t)
   {
       return (5*(t-32))/9;
   }

int Binary9_3(int N)
{
    int result = 0;
    bool flag = false;
    for (int n=sizeof(int)*8-1; n>-1; n--)
    {
        if((N>>n)&1)
            if(!flag)
                flag = true;
        if (flag)
        {
            if((N>>4)&1)
                result += ((N>>n)&1)? 1 : 0;
            else
                result += ((N>>n)&1)? 0 : 1;
        }
    }
    return result;
}
