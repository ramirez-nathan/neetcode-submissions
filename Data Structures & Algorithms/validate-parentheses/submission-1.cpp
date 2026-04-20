#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }
            else { // its a closing bracket
                if (stack.empty()) return false; // this means there is no matching left char
                char top = stack.top();
                stack.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                        return false;
                }
            }
        }
        return stack.empty(); // if we finished loop and stack is empty, return true
    }
};
