#include "stopwatch.h"

void Stopwatch::start() 
  {
    start_time = std::chrono::high_resolution_clock::now();
  }
  std::chrono::duration<double> Stopwatch::peek() const
  {
    return std::chrono::high_resolution_clock::now() - start_time;
  }

  double Stopwatch::peek_ms() const
  {
    return this->peek().count()*1000.0;
  }