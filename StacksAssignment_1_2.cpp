//   1 Solution =>   (2) option is correct.

//   2 Solution 

#include <iostream>
#include <stack>
void removeKthFromTop(std::stack<int>& S1, int k) {
    std::stack<int> S2;
    // Pop the top k-1 elements from S1 and push them onto S2
    for (int i = 0; i < k - 1; ++i) {
        if (!S1.empty()) {
            S2.push(S1.top());
            S1.pop();
        } else {
            std::cout << "The stack has fewer than k elements.\n";
            return;
        }
    }
    // Pop the kth element from S1 (the element to remove)
    if (!S1.empty()) {
        S1.pop();
    } else {
        std::cout << "The stack has fewer than k elements.\n";
        return;
    }
    // Push the elements from S2 back to S1
    while (!S2.empty()) {
        S1.push(S2.top());
        S2.pop();
    }
}
int main() {
    std::stack<int> S1;
    // Push elements to the stack
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.push(5);
    int k = 3;
    removeKthFromTop(S1, k);
    
    // Print the remaining elements in S1
    std::cout << "Elements in S1 after removing " << k << "th element from top: ";
    while (!S1.empty()) {
        std::cout << S1.top() << " ";
        S1.pop();
    }
    return 0;
}

//     3 Solution  =>  (2)  option is correct

//     4 Solution  =>  (3),(4)  are not correct


//                                      Assignment 2


//    1 Solution => https://leetcode.com/problems/valid-parentheses/submissions/1348566313/

//    2 Solution => https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/1348569017/

//    3 Solution => https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/1348571156/

//    4 Solution => 

