

#ifndef GARBAGE_COLLECTOR_GLOBAL_INCLUDES_H
#define GARBAGE_COLLECTOR_GLOBAL_INCLUDES_H

#include <Windows.h>
#include <memory>
#include <iostream>

#define GC_ERROR "Error message"

#define ERROR(x) std::cerr << "[ERROR] " << x << '\n';
#define SUCCESS(x) std::cout << "[SUCCESS] " << x << '\n';
#define INFO(x) std::cout << "[INFO] " << x << '\n';

#endif //GARBAGE_COLLECTOR_GLOBAL_INCLUDES_H
