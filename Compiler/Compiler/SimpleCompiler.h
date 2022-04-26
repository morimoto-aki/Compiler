#pragma once
#include <string>

/**
 * 演算子の優先度を返す．値が大きいほど優先度が高い．
 * @param char で書かれた演算子
 * @return 優先度
 *        1: '(', ')'
 *        2: '+', '-'
 *        3: '*', '/'
 */
int priority(char c);

/**
 * 後置記法の式を計算する関数
 * スタック std::stack<int> を使うこと．
 * @param std::string で記述された後置記法の文字列．
 *        例はテストファイルを参照すること．
 * @return 計算結果
 */
int postfix_calc(std::string &postfix_eq);

/**
 * 中置記法を後置記法に変換する関数
 * @param std::string で記述された中置記法の文字列．
 *        例はテストファイルを参照すること．
 * @return 後置記法の文字列
 */
std::string infix_to_postfix(std::string &infix_eq);

