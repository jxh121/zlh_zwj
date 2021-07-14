// Copyright 2019, Lab301.
// All rights reserved.
//
// Author: YaoYinbo<snowingsea@gmail.com>
//
// 基本类型测试用例
//

int test_branch(int a) {
  if (a) return 0;
  return 1;
}

int test_real(double b) {
  if (b == 7.5) return 0;
  if (b < 10.5) return 1;
  return 2;
}

int test_switch(int a) {
  int ret;
  switch(a) {
    case 1:
      ret = 10;
      break;
    case 2:
      ret = 8;
      break;
    case 3:
      return 7;
    case 4:
      ret = 6;
    case 5:
      ret = 4;
      break;
    default:
      ret = 0;
      break;
  }
  return ret;
}

int test_for(int loop) {
  int sum = 0;
  int i;
  for (i = 1; i <= loop; ++i) {
    sum += i;
  }
  return sum;
}

int test_while(int loop) {
  int sum = 0;
  int i = 1;
  while(i <= loop) {
    sum += i++;
  }
  return sum;
}

int test_do_while(int loop) {
  int sum = 0;
  int i = 0;
  do {
    sum += i;
  } while(++i <= loop);
  return sum;
}

int test_nest_branch(int a, char b, double c) {
  if (b == 'A') {
    a += 3;
    if (a > 10 && c * 4 == 10) {
      return 1;
    } else if (a < 6 && a > 0) {
      return 2;
    } else if (c > 100.9) {
      return 3;
    }
    return 4;
  } else {
    return 5;
  }
}

int g;
int test_global() {
  if (g & 8) return 0;
  return 1;
}

int exponent(int m, int a) {
  if (m == 0 || m == 1) return m;
  int ret = 1;
  for (; a; a >>= 1, m *= m) {
    if (a & 1) {
      ret *= m;
    }
  }
  return ret;
}
