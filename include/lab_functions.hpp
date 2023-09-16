// Copyright 2023 Your Name <your@email.tld>

#ifndef INCLUDE_LAB_FUNCTIONS_HPP_
#define INCLUDE_LAB_FUNCTIONS_HPP_

#include "lab_structures.hpp"

void SortByName(std::vector<Student>&);
void SortByRating(std::vector<Student>&);
size_t CountTwoness(const std::vector<Student>&);
size_t CountExcellent(const std::vector<Student>&);
std::vector<Group> GroupsId(const std::vector<Student>&);

#endif // INCLUDE_LAB_FUNCTIONS_HPP_
