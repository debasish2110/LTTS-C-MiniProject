#include <stdio.h>
#include "../inc/myHeader.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_zero(void)
{
    
    TEST_ASSERT_EQUAL(0, my_test(0,0));
    TEST_ASSERT_EQUAL(0, my_test(1,-1));
    //TEST_ASSERT_EQUAL(0, Index());
}
void test_1(void){
    TEST_ASSERT_EQUAL(3, my_test(2,1));
    TEST_ASSERT_EQUAL(9, my_test(4,5));
}
void test_2(void){
    TEST_ASSERT_EQUAL(-1, my_test(3,-4));
    TEST_ASSERT_EQUAL(-2, my_test(3,-5));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_zero);
    RUN_TEST(test_1);
    RUN_TEST(test_2);

    /* Close the Unity Test Framework */
    return UNITY_END();
}