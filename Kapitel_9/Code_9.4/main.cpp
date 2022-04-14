#include <boost/filesystem.hpp>
#include <iostream>

int main() {
  std::cout << "Dateigröße main.cpp: "
            << boost::filesystem::file_size("../main.cpp")
            << " bytes" << std::endl;

#ifdef OpenCV_FOUND
  std::cout << "OpenCV found." << std::endl;
#else
  std::cout << "OpenCV not found." << std::endl;
#endif

  return 0;
}
