#include "pch.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

/*

#include "pch.h"

#include "../../Compiler/Compiler/SimpleCompiler.h"
#include "../../Compiler/Compiler/Compiler.cpp"

TEST(_1_Priority, PriorityCheck) {
	EXPECT_EQ(priority('('), 1);
	EXPECT_EQ(priority(')'), 1);
	EXPECT_EQ(priority('+'), 2);
	EXPECT_EQ(priority('-'), 2);
	EXPECT_EQ(priority('*'), 3);
	EXPECT_EQ(priority('/'), 3);
}


TEST(_2_PostfixCalc, 1) {
	std::string test = "1 2 +";
	int ans = 3;
	EXPECT_EQ(postfix_calc(test), ans);
}

TEST(_2_PostfixCalc, 2) {
	std::string test = "1 2 + 3 *";
	int ans = 9;
	EXPECT_EQ(postfix_calc(test), ans);
}

TEST(_2_PostfixCalc, 3) {
	std::string test = "1 2 + 3 4 + *";
	int ans = 21;
	EXPECT_EQ(postfix_calc(test), ans);
}

TEST(_2_PostfixCalc, 4) {
	std::string test = "5 6 7 8 + * *";
	int ans = 450;
	EXPECT_EQ(postfix_calc(test), ans);
}

TEST(_3_InfixToPostfix, 1) {
	std::string test = "1 + 2";
	std::string ans = "1 2 +";
	EXPECT_EQ(infix_to_postfix(test), ans);
}

TEST(_3_InfixToPostfix, 2) {
	std::string test = "(1 + 2) * 3";
	std::string ans = "1 2 + 3 *";
	EXPECT_EQ(infix_to_postfix(test), ans);
}

TEST(_3_InfixToPostfix, 3) {
	std::string test = "(1 + 2) * (3 + 4)";
	std::string ans = "1 2 + 3 4 + *";
	EXPECT_EQ(infix_to_postfix(test), ans);
}

TEST(_3_InfixToPostfix, 4) {
	std::string test = "((5 + 6) * ((7 + 8)))";
	std::string ans = "5 6 + 7 8 + *";
	EXPECT_EQ(infix_to_postfix(test), ans);
}

TEST(_3_InfixToPostfix, 5) {
	std::string test = "((1 + 2) * (3 + 4)) / (9 + 0)";
	std::string ans = "1 2 + 3 4 + * 9 0 + /";
	EXPECT_EQ(infix_to_postfix(test), ans);
}

TEST(_4_ALL, 1) {
	std::string test = "((5 + 6) * ((7 + 8)))";
	int ans = 165;
	EXPECT_EQ(postfix_calc(infix_to_postfix(test)), ans);
}


*/