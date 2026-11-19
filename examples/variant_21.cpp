#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
  int exchange_rate[] = {91, 93, 92, 95, 94, 96, 90, 89, 94, 97};
  const std::size_t n = sizeof(exchange_rate) / sizeof(exchange_rate[0]);
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Исходный массив: ";
  for (int i = 0; i < n; ++i) {
    std::cout << exchange_rate[i] << ' ';
  }
  std::cout << '\n';
  std::cout << "Минимальный курс: " << arr_min(exchange_rate, n) << '\n';
  std::cout << "Максимальный курс: " << arr_max(exchange_rate, n) << '\n';
  std::cout << "Средний курс: " << arr_average(exchange_rate, n) << '\n';
  std::cout << "Медианный курс: " << arr_median(exchange_rate, n) << '\n';
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (exchange_rate[i] > 93) {
      count++;
    }
  }
  std::cout << "Число дней с курсом выше 93: " << count << '\n';
  return 0;
}