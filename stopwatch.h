#include <chrono>

class Stopwatch
{
public:
  void start();
  std::chrono::duration<double> peek() const;
  double peek_ms() const;
private:
  std::chrono::time_point<std::chrono::high_resolution_clock> start_time{};
};