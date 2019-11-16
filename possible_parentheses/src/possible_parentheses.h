#include <list>

#define MAX_SIZE 100

void possibleParenthesis(int pos, int n, int open, int closed, std::list<std::string> & result) {
    static char str[MAX_SIZE];
    if (closed == n) {
        result.push_back(str);
        return;
    }
    if (open < n) {
        str[pos] = '{';
        possibleParenthesis(pos + 1, n, open + 1, closed, result);
    }
    if (open > closed) {
        str[pos] = '}';
        possibleParenthesis(pos + 1, n, open, closed + 1, result);
    }
}

// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n
void possibleParenthesis(int n, std::list<std::string> & result)
{
    if (n > 0) {
        possibleParenthesis(0, n, 0, 0, result);
    }
}

