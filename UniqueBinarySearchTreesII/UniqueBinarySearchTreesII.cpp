//
// Created by 郑巍 on 2020/3/24.
//

#include "UniqueBinarySearchTreesII.h"

std::vector<TreeNode *> UniqueBinarySearchTreesII::generateTrees(int n) {
    if (n <= 0) {
        return std::vector<TreeNode *>(0);
    }

    return generateTrees(1, n);
}

std::vector<TreeNode *> UniqueBinarySearchTreesII::generateTrees(int start, int end) {
    std::vector<TreeNode *> ret;
    if (end - start < 0) {
        ret.push_back(0);
    }

    if (end - start == 0) {
        ret.push_back(new TreeNode(start));
    }

    if (end - start > 0) {
        for (int i = start; i <= end; ++i) {
            std::vector<TreeNode *> l = generateTrees(start, i - 1);
            std::vector<TreeNode *> r = generateTrees(i + 1, end);

            for (int j = 0; j < l.size(); ++j) {
                for (int k = 0; k < r.size(); ++k) {
                    TreeNode *h = new TreeNode(i);
                    h->left = l[j];
                    h->right = r[k];
                    ret.push_back(h);
                }
            }
        }
    }

    return ret;
}