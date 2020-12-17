//  A C++ solution

#include <iostream>
#include <iomanip>

int main() {

  int N;
  std::cin >> N;
  int A, B, C;
  A = B = C = 1;
  int najveci = 0;

  for (size_t i = 0; i < N - 2; ++i) {
    for (size_t j = 0; j < N - 2; ++j) {
      for (size_t k = 0; k < N - 2; ++k) {
        if ((i + j + k) == N) {
          if ((i * j * k) > najveci) {
            std::cout << i << ' ' << k << ' ' << j << ' ' << (i + j + k) << ' ' << (i * j * k) << ' ' << N << '\n';
            najveci = i * j * k;
            A = i;
            B = j;
            C = k;
          }
        }
      }
    }
  }
  std::cout << A << ' ' << B << ' ' << C << std::endl;

  return 0;
}

/*
Based off this Python:

N = int(input())
najveci = 0
A, B, C = 1, 1, 1
for i in range(1, N - 2):
  for j in range(1, N - 2):
    for k in range(1, N - 2):
      if i + j + k == N:
        if i * j * k > najveci:
          print(i, k, j, i + j + k, i * j * k, N)
          najveci = i * j * k
          A, B, C = i, j, k
print(A,B,C)

 */