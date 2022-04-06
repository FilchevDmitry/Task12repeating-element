#include <iostream>

int main() {
 int numbers [15]={1,2,3,4,5,6,7,8,1,9,10,11,12,13,14};
 int num=0,ni=0,sum=0;
 int min=numbers[0], max=0;
    for (int i = 0; i < 15; ++i)
    {
        if(min>numbers[i])
            min=numbers[i];
        if(max<numbers[i])
            max=numbers[i];
        ni+=numbers[i];
    }
    sum=((min+max)*14)/2;
    num=ni-sum;
    std::cout<<num;
 return 0;
}
