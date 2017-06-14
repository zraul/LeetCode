//
// Created by 郑巍 on 2017/5/5.
//

#include "RemoveDuplicates.h"


int removeDuplicates(int* nums, int numSize)
{
    int count = 0;
    for (int i = 1; i < numSize; ++i)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
//        else
//        {
//            nums[i-count] = nums[i];
//        }
    }

    for (int j = 0; j < numSize; ++j)
    {
        cout<<nums[j]<<endl;
    }

    cout<<"##############"<<count<<"#######"<<endl;
    return numSize - count;
}