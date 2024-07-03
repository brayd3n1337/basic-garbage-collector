

#ifndef GARBAGE_COLLECTOR_EXAMPLE_CLASS_H
#define GARBAGE_COLLECTOR_EXAMPLE_CLASS_H


#include <string>
#include "../objects/garbage_collected_object.h"
#include "../global_includes.h"

class ExampleClass : public GarbageCollectedObject {
private:
public:
    void PrintSomething(const std::string& message)
    {
        this->IncreaseReferenceCount();

        INFO(message);

        // method is finished executing so we can decrease the reference count
        // check for if > 0 already inside of decrease reference count
        this->DecreaseReferenceCount();
    }
};


#endif //GARBAGE_COLLECTOR_EXAMPLE_CLASS_H
