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
    
    TEST_ASSERT_EQUAL(0, Cover_Page());
    //TEST_ASSERT_EQUAL(0, Index());

}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_zero);

    /* Close the Unity Test Framework */
    return UNITY_END();
}