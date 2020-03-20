//
// Created by 郑巍 on 2020/3/20.
//

#include "SubsetsII.h"

std::vector<std::vector<int>> SubsetsII::subsetsWithDup(std::vector<int> &nums) {
    std::vector<std::vector<int> > totalset = {{}};
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size();){
        int count = 0; // num of elements are the same
        while(count + i<nums.size() && nums[count+i]==nums[i])  {
            count++;
        }

        int previousN = totalset.size();
        for(int k=0; k<previousN; k++){
            std::vector<int> instance = totalset[k];
            for(int j=0; j<count; j++){
                instance.push_back(nums[i]);
                totalset.push_back(instance);
            }
        }
        i += count;
    }
    return totalset;
}