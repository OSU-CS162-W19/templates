#include <iostream>

#include <vector>

#include <exception>

#include <algorithm>

int main(int argc, char const *argv[]) {

  std::vector<int> ivec;
  std::vector<float> fvec;

  for (int i = 0; i < 100; i++) {
    ivec.push_back(100 - i);
    fvec.push_back(i * 0.5);
  }

  try {
    std::cout << "ivec[1000]: " << ivec.at(1000) << std::endl;
  } catch (std::exception e) {
    std::cout << "Caught an exception: " << e.what() << std::endl;
  }
  std::cout << "ivec[1000]: " << ivec[1000] << std::endl;

  std::vector<std::vector<int> > ivec_2d;
  for (int i = 0; i < 10; i++) {
    std::vector<int> row;
    for (int j = 0; j < 20; j++) {
      row.push_back(j);
    }
    ivec_2d.push_back(row);
  }
  // std::cout << "ivec_2d[5][5]: " << ivec_2d.at(5).at(5) << std::endl;
  // std::cout << "ivec_2d[5][5]: " << ivec_2d[5][5] << std::endl;

  // for (int i = 0; i < ivec.size(); i++) {
  //   std::cout << ivec[i] << std::endl;
  // }

  std::vector<int>::iterator it = ivec.begin();
  while (it != ivec.end()) {
    std::cout << *it <<  " ";
    ++it;
  }
  std::cout << std::endl;

  std::sort(ivec.begin(), ivec.end());

  std::cout << std::endl;
  it = ivec.begin();
  while (it != ivec.end()) {
    std::cout << *it <<  " ";
    ++it;
  }
  std::cout << std::endl;

  // std::vector<std::vector<Room> >::iterator it_2d = ivec_2d.begin();
  // while (it_2d != ivec_2d.end()) {
  //   std::vector<int>::iterator it_row = (*it_2d).begin();
  //
  //   ++it_2d;
  // }

  return 0;
}
