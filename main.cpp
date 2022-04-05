#include <iostream>

int main() {
 int numbers [15]={1,2,3,4,5,6,7,8,1,10,11,12,13,14,15};
 int num=0,ni=0;
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j < 15; ++j) {
            if (numbers[i]==numbers[j])
            {
                ni++;
                if(ni>1)
                    num=numbers[j];
            }
        }
        ni=0;
    }
    std::cout<<num;
 return 0;
}
