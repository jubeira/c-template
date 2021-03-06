/*!
 * @file   all_tests.c
 * @brief  Test main file
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Jan 13, 2020
 *
 * Test main file, part of the C Project Template. Use makefile to build.
 */
#include "unity_fixture.h"

static void RunAllTests(void) {
  RUN_TEST_GROUP(foo);
  RUN_TEST_GROUP(bar);
}

int main(int argc, const char* argv[]) {
  return UnityMain(argc, argv, RunAllTests);
}
