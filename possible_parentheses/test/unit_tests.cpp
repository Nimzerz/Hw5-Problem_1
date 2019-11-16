#include "gtest/gtest.h"
#include "possible_parentheses.h"

void showResult(std::list<std::string> & result) {
    for (std::list<std::string>::iterator i = result.begin(); i!=result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

TEST(test_recursive, 1) {
    std::list<std::string> result;
    possibleParenthesis(1, result);
    ASSERT_EQ(result.size(), 1);
    result.remove("{}");
    ASSERT_EQ(result.size(), 0);
    // homework: add verification
}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);
    ASSERT_EQ(result.size(), 2);
    result.remove("{}{}");
    ASSERT_EQ(result.size(), 1);
    result.remove("{{}}");
    ASSERT_EQ(result.size(), 0);
    // homework: add verification
}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);
    std::string results[5] = {"{}{}{}", "{}{{}}", "{{}}{}", "{{}{}}", "{{{}}}"};
    for (int i = 5; i >= 0; i--) {
        result.remove(results[i]);
        ASSERT_EQ(result.size(), i);
    }
//    ASSERT_EQ(result.size(), 5);
//    result.remove("{}{}{}");
//    ASSERT_EQ(result.size(), 4);
//    result.remove("{}{{}}");
//    ASSERT_EQ(result.size(), 3);
//    result.remove("{{}}{}");
//    ASSERT_EQ(result.size(), 2);
//    result.remove("{{}{}}");
//    ASSERT_EQ(result.size(), 1);
//    result.remove("{{{}}}");
//    ASSERT_EQ(result.size(), 0);
    // homework: add verification
}

// and more
