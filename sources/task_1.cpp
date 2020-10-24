// Copyright 2018 Your Name <your_email>
#include <vector>
#include <iostream>
#include <tasks.hpp>
#include <vector>
using namespace std;
void multi_2(std::vector<int>& input) {
  for (unsigned int i=0; i < input.size();i++)
    input[i]*=2;
}

void reduce_a(std::vector<int>& input ) {
  for (unsigned int i=0;i<input.size();i++)
    input[i]-=2;
}

void div_on_first(std::vector<int>& input) {
  for ( unsigned int i=0;i<input.size();i++)
    input[i]/=input[0];
}
