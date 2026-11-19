#include <iostream>
#include <algorithm>

int arr_sum(const int* arr, std::size_t n) {
  int sum = 0;
  for (std::size_t i = 0; i < n; ++i) {
    sum += arr[i];
  }
  return sum;
}

int arr_max(const int* arr, std::size_t n) {
  int max = arr[0];
  for (std::size_t i = 0; i < n; ++i) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int arr_min(const int* arr, std::size_t n) {
  int min = arr[0];
  for (std::size_t i = 0; i < n; ++i) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

double arr_average(const int* arr, std::size_t n) {
  double sum = 0.0;
  for (std::size_t i = 0; i < n; ++i) {
    sum += arr[i];
  }
  return sum / n;
}

int arr_count_positive(const int* arr, std::size_t n) {
  int count = 0;
  for (std::size_t i = 0; i < n; ++i) {
    if (0 < arr[i]) {
      count++;
    }
  }
  return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
  int count = 0;
  for (std::size_t i = 0; i < n; ++i) {
    if (0 > arr[i]) {
      count++;
    }
  }
  return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
  int count = 0;
  for (std::size_t i = 0; i < n; ++i) {
    if (0 == arr[i]) {
      count++;
    }
  }
  return count;
}

int arr_product(const int* arr, std::size_t n) {
  int product = 1;
  for (std::size_t i = 0; i < n; ++i) {
    product *= arr[i];
  }
  return product;
}

/*
double arr_median(const int* arr, std::size_t n) {
  int* array = new int[n];
  double med = 0;
  for (int i = 0; i < n; ++i) {
    array[i] = arr[i];
  }
  std::sort(array, array + n);
  if (n % 2 == 0) {
    med = ((double)array[n / 2] + (double)array[n / 2 - 1]) / 2;
  } else {
    med = (double)array[n / 2];
  }
  delete[] array;
  return med;
}
*/