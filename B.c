int stub_int(int a);

int simple_mcdc(int a, int b) {
  if (a && b) {
    return 0;
  }
  return 1;
}

int complex_mcdc(int a, int b, int c, int d, int e, int f) {
  int x = a && b;
  int y = c && d;
  int z = stub_int(e || f);
  if (x && y || z) {
    return 0;
  }
  return 1;
}

