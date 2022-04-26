#pragma once
#include <string>

/**
 * ���Z�q�̗D��x��Ԃ��D�l���傫���قǗD��x�������D
 * @param char �ŏ����ꂽ���Z�q
 * @return �D��x
 *        1: '(', ')'
 *        2: '+', '-'
 *        3: '*', '/'
 */
int priority(char c);

/**
 * ��u�L�@�̎����v�Z����֐�
 * �X�^�b�N std::stack<int> ���g�����ƁD
 * @param std::string �ŋL�q���ꂽ��u�L�@�̕�����D
 *        ��̓e�X�g�t�@�C�����Q�Ƃ��邱�ƁD
 * @return �v�Z����
 */
int postfix_calc(std::string &postfix_eq);

/**
 * ���u�L�@����u�L�@�ɕϊ�����֐�
 * @param std::string �ŋL�q���ꂽ���u�L�@�̕�����D
 *        ��̓e�X�g�t�@�C�����Q�Ƃ��邱�ƁD
 * @return ��u�L�@�̕�����
 */
std::string infix_to_postfix(std::string &infix_eq);

