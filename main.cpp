#include "stopwatch.h"
#include <iostream>

int main(int argc, char** argv){
    if(argc != 2){
        std::cout << "USAGE: my_time [program]\n";
        return 1;
    }

    Stopwatch st;
    std::cout << "timer start\n\n";
    st.start();
    system(argv[1]);
    std::cout << "real time:" << st.peek_ms() << "ms\n";

    return 0;
}
