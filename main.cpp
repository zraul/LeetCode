//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
#include "RegularExpressionMatching/RegularExpressionMatching.h"

int main()
{
    RegularExpressionMatching * p = new RegularExpressionMatching();
    cout<<p->isMatch("aaaab", "a*")<<endl;
    return 0;
}