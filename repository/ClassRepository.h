#ifndef GARBAGE_COLLECTOR_CLASSREPOSITORY_H
#define GARBAGE_COLLECTOR_CLASSREPOSITORY_H

#include <vector>
#include "../objects/garbage_collected_object.h"

class ClassRepository {
private:
    static std::vector<const GarbageCollectedObject*> classes;

public:
    ClassRepository() = default;
    ~ClassRepository() = default;

    static void AddClass(const GarbageCollectedObject* klass);
    static void RemoveClass(const GarbageCollectedObject* klass);

    static std::vector<const GarbageCollectedObject*> GetClasses();
};

#endif // GARBAGE_COLLECTOR_CLASSREPOSITORY_H
