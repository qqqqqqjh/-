//奇数之和 = 偶数之和，等价于 奇数之和−偶数之和 = 0。
//把偶数下标对应的数字取相反数，这样只需一个变量 s 记录 奇数之和−偶数之和。
//初始化 s = 0，遍历字符串，奇数下标数字加到 s 中，偶数下标数字的相反数加到 s 中。
// 如果最终 s = 0，说明奇数下标数字之和等于偶数下标数字之和，返回 true，否则返回 false。
class Solution {
public:
    bool isBalanced(string num) {
        int s = 0;
        for (int i = 0; i < num.length(); i++) {
            int c = num[i] - '0';
            s += i % 2 ? c : -c;
        }
        return s == 0;
    }
};
