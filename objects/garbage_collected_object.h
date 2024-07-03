#ifndef GARBAGE_COLLECTOR_GARBAGE_COLLECTED_OBJECT_H
#define GARBAGE_COLLECTOR_GARBAGE_COLLECTED_OBJECT_H

#include <vector>
#include "../global_includes.h"

class GarbageCollectedObject {
private:
    int referenceCount = 0;

protected:
    void IncreaseReferenceCount();
    void DecreaseReferenceCount();

public:
    GarbageCollectedObject();
    virtual ~GarbageCollectedObject();

    int GetReferenceCount() const;
};

#endif // GARBAGE_COLLECTOR_GARBAGE_COLLECTED_OBJECT_H