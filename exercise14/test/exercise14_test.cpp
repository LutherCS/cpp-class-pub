/**
 * @file exercise14_test.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 14 test
 * @version 2022.3
 * @date 2022-03-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif
#include "../src/exercise14.hpp"


TEST_CASE ( "simple test", "[test]" ) {
    CHECK ( 1 == 1 );
}
