#include <iostream>

#include "point.hpp"

#include "dynarray.hpp"

template <class T>
void swap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

void print_two_things(int t, int u) {
  std::cout << t << "\t" << u << std::endl;
}

template <class T, class U>
void print_two_things(T t, U u) {
  std::cout << t << "\t" << u << std::endl;
}

int main() {
  // int integers[2] = {8, 16};
  // std::cout << "integers[0]: " << integers[0] << std::endl;
  // std::cout << "integers[1]: " << integers[1] << std::endl;
  //
  // std::cout << std::endl << "After swap:" << std::endl;
  //
  // // swap<int>(integers[0], integers[1]);
  // swap(integers[0], integers[1]);
  //
  // std::cout << "integers[0]: " << integers[0] << std::endl;
  // std::cout << "integers[1]: " << integers[1] << std::endl;
  // std::cout << std::endl;
  //
  // float floats[2] = {3.1415, 0.125};
  // std::cout << "floats[0]: " << floats[0] << std::endl;
  // std::cout << "floats[1]: " << floats[1] << std::endl;
  // std::cout << std::endl << "After swap:" << std::endl;
  //
  // // swap<float>(floats[0], floats[1]);
  // swap(floats[0], floats[1]);
  // std::cout << "floats[0]: " << floats[0] << std::endl;
  // std::cout << "floats[1]: " << floats[1] << std::endl;
  // std::cout << std::endl;
  //
  // Point points[2] = {Point(2, 4), Point(-2, -4)};
  // std::cout << "points[0]: (" << points[0].get_x() << ", " << points[0].get_y() << ")" << std::endl;
  // std::cout << "points[1]: (" << points[1].get_x() << ", " << points[1].get_y() << ")" << std::endl;
  // std::cout << std::endl << "After swap:" << std::endl;
  //
  // // swap<Point>(points[0], points[1]);
  // swap(points[0], points[1]);
  // std::cout << "points[0]: (" << points[0].get_x() << ", " << points[0].get_y() << ")" << std::endl;
  // std::cout << "points[1]: (" << points[1].get_x() << ", " << points[1].get_y() << ")" << std::endl;
  // std::cout << std::endl;
  //
  // print_two_things("pi:", 3.1415);

  Dynarray<int> int_array;
  int_array.add(1);
  int_array.add(2);
  int_array.add(3);

  Dynarray<float> float_array;
  float_array.add(1.1);
  float_array.add(2.2);
  float_array.add(3.3);

  Dynarray<Point> point_array;
  point_array.add(Point(1, 1));
  point_array.add(Point(2, 2));
  point_array.add(Point(3, 3));

  Dynarray<Dynarray<int> > dynarray_array;

  Dynarray<int>* int_array_dyn = new Dynarray<int>();
  delete int_array_dyn;
}
