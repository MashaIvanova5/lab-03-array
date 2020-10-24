// Copyright 2018 Your Name <your_email>
#include <math.h>
#include <string>
#include <iostream>
#include <tasks.hpp>
// Task 5.
bool name_is_even(const std::string& name) {
  {
    if (name.size() % 2 == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    if (name_one.size() > name_two.size())
    {
      return true;
    }
    else
    {
      return false;
    }
  }

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest)
  {
    const int a = 3;
    std::string town[a];
    town[0] =name_one;
    town[1] =name_two;
    town[2] =name_three;
    for (int i = 0; i < a; i++)
    {
      if (town[i].size() < the_shortest.size())
        the_shortest = town[i];
      if (town[i].size() > the_longest.size())
        the_longest = town[i];
    }
  }

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  for (int i = m; i < n; i++)
    std::cout<< word[i];
  return std::string();
}

// Task 9.
void add_stars(std::string& word) {
  word.insert(0, word.size(), '*');
}

// Task 10.
int percent_of_a(const std::string& word) {
  int l = 0, sum = 0;
  std::string a="a";
  for (unsigned int i = 0; i < word.length(); i++)
    if (word[i] == a[0])l++;
  sum = (l% word.length()) ;
    return sum;
}

// Task 11.
std::string replace_can(const std::string& new_word)
{
  bool flag = true;
  unsigned int pos=0;
  while(flag)
  {
    pos = new_word.find("can", 0);
    if(pos!=(unsigned int)std::string::npos) flag = false;
    new_word.replace(pos, 3, "new_word");
  }
  return new_word;
}