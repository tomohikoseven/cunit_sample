/*
* test
*/
#include<CUnit/CUnit.h>
#include<CUnit/Console.h>

// test target
#include<fib.h>

/*
* prototype
*/
void test_fib_001(void);
void test_fib_002(void);

/*
* main
*/
int
main()
{
    CU_pSuite fib_suite;

    // テストレジストリ作成
    CU_initialize_registry();

    // テストスイート
    fib_suite = CU_add_suite( "Fib", NULL, NULL );
    // テストケース
    CU_add_test( fib_suite, "test_001", test_fib_001 );
    CU_add_test( fib_suite, "test_002", test_fib_002 );

    // テスト実行
    CU_console_run_tests();

    // テストレジストリ削除
    CU_cleanup_registry();

    return 0;
}
void
test_fib_001(void)
{
    int n   = 0;
    int ans = 1;

    CU_ASSERT_EQUAL( fib( n ), ans );
}
void
test_fib_002(void)
{
    int n   = 1;
    int ans = 1;

    CU_ASSERT_EQUAL( fib( n ), ans );
}
