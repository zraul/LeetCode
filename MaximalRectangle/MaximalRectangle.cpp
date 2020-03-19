//
// Created by 郑巍 on 2020/3/19.
//

#include "MaximalRectangle.h"

int MaximalRectangle::maximalRectangle(std::vector<std::vector<char>> &matrix) {
    int num_i = matrix.size();
    int num_j = matrix[0].size();
    if (num_j == 0 || num_i == 0){
        return 0;
    }
    std::vector<std::vector<int>> max_x(num_i,std::vector<int>(num_j,0));

    int area=0;
    for (int i=0;i<num_i;i++){
        for (int j=0;j<num_j;j++){
            if (matrix[i][j]=='1'){
                if (j==0) {
                    max_x[i][j]=1;
                } else{
                    max_x[i][j]=max_x[i][j-1]+1;
                }
                int y=1;
                int x=num_j;
                while((i-y+1>=0)&&(matrix[i-y+1][j]=='1')){
                    x=std::min(x, max_x[i-y+1][j]);
                    area=std::max(area,x*y);
                    y++;
                }
            }
        }
    }

    return area;
}