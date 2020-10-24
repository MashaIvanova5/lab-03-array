// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
    int k=0;
    for (unsigned int i=0; i < input.size();i++){
      k+=input[i];
    }
    return k;
}

int square_sum(const std::vector<int>& input) {
  int k=0;
  for (unsigned int i=0; i < input.size();i++)
  {
    k=k+input[i]*input[i];
  }
    return k;
}

int sum_six(const std::vector<int>& input) {
  int k=0;
  for (unsigned int i=0; i < 6;i++){
    k+=input[i];
  }
    return k;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int k = 0;
  for (int i = k1; i < k2; i++)
  {
    k += input[i];
  }
    return k;
}

int mean(const std::vector<int>& input) {
    unsigned int k=0;
    double sum=0;
  for (unsigned int i=0; i < input.size();i++)
    {
      sum += input[i];
      k = k+1;
    }
    return sum/k;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  double k = 0;
  for (int i = s1; i < s2; i++)
  {
    k += input[i];
  }
  return k / (s2 - s1 + 1);
}
