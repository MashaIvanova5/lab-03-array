// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
  for (unsigned int i = 0; i < (input.size() / 2) - 8; i++) {
    double b = input[i];
    input[i] = input[input.size() - 1 - i];
    input[input.size() - 1 - i] = b;
  }
}