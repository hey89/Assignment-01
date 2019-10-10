//
//  main.c
//  Assignment 03
//
//  Created by yue he on 2019/10/10.
//  Copyright © 2019 yue he. All rights reserved.
//

#include <stdio.h>
#define Length 4

char array[Length] = {'1', '2', '3', '4'};
int nums[Length];

void fun(int index)
{
    if(index == Length)
    {
        printf("{ ");
        int i;
        for(i=0; i<Length; i++)
            if(nums[i] == 1)
                printf("%c ", array[i]);
        printf("}\n");
        return;
    }
    nums[index] = 0;
    fun(index+1);
    nums[index] = 1;
    fun(index+1);
}

int main(void)
{
    fun(0);
    return 0;
}
