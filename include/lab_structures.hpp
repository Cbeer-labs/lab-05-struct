// Copyright 2023 Your Name <your@email.tld>

#ifndef INCLUDE_LAB_STRUCTURES_HPP_
#define INCLUDE_LAB_STRUCTURES_HPP_

#include <cstdint>
#include <string>
#include <vector>

struct Student {
  std::string Name;
  std::string GroupId;
  std::vector<uint8_t> Ratings;
  std::vector<std::string> Subjects;
};

struct Group {
  std::string Id;
  std::vector<Student> Students;
};

#endif  // INCLUDE_LAB_STRUCTURES_HPP_
