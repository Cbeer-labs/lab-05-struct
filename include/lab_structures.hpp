// Copyright 2023 Your Name <your@email.tld>

#ifndef INCLUDE_LAB_STRUCTURES_HPP_
#define INCLUDE_LAB_STRUCTURES_HPP_

#include <string>
#include <vector>

struct Student {
  std::string Name;
  std::string GroupId;
  std::vector<unsigned> Ratings;
  std::vector<std::string> Subjects;
};

struct Group {
  std::string Id;
  std::vector<Student> Students;
};

#endif  // INCLUDE_LAB_STRUCTURES_HPP_
