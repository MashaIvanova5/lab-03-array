// Copyright 2018 Your Name <your_email>
#include <vector>
#include <iostream>
#include <tasks.hpp>
#include <math.h>
// Task 4.
void remove_negative(std::vector<int>& input)
  {
    for (unsigned int i = 0; i < input.size(); ++i)
    {
      if (input[i] < 0)
      {
      input.erase(input.begin()+i);
      }
    }
  }

 void remove_last_even(std::vector<int>& input)
  {
    for (unsigned int i = 0; i < input.size(); ++i) {
      if (input[input.size() - 1 - i] % 2 == 0) {
        input.erase(input.end() - 1 - i);
      }
    }
  }
