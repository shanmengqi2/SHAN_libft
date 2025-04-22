#include "unity.h"
#include "libft.h"

void setUp(void) {
    // 初始化代码，可以为空
}



void test_ft_strlen(void)
{
    TEST_ASSERT_EQUAL_INT(ft_strlen(""), 0);
    TEST_ASSERT_EQUAL_INT(ft_strlen("a"), 1);
    TEST_ASSERT_EQUAL_INT(ft_strlen("abc"), 3);
}

void test_ft_toupper(void)
{
    TEST_ASSERT_EQUAL_INT(ft_toupper('a'), 'A');
    TEST_ASSERT_EQUAL_INT(ft_toupper('b'), 'B');
    TEST_ASSERT_EQUAL_INT(ft_toupper('c'), 'C');
}

void tearDown(void) {
    // 清理代码，可以为空
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_toupper); 
    return UNITY_END();
}