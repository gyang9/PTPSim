#include <stdlib.h>

#include <Ptp.hh>
#include <RAT/AnyParse.hh>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  auto parser = new RAT::AnyParse(argc, argv);
  std::cout << "Ptp version: " << RAT::PTPVERSION << std::endl;
  auto ptp = PTP::Ptp(parser, argc, argv);
  ptp.Begin();
  ptp.Report();
}
