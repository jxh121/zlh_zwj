// Copyright 2019, Lab301.
// All rights reserved.
//
// Author: YaoYinbo<snowingsea@gmail.com>
//
// 复合类型测试用例
//

typedef struct {
  int x;
  int y;
} Point;

int test_point(Point p) {
  if (p.x) {
    return 0;
  }
  return 1;
}

typedef struct {
  Point a;
  Point b;
} Segment;

Point test_segment(Segment s) {
  if (s.a.x > s.b.x) {
    return s.a;
  }
  return s.b;
}