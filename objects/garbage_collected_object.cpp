#include "garbage_collected_object.h"
#include "../repository/ClassRepository.h"

GarbageCollectedObject::GarbageCollectedObject()
{
    ClassRepository::AddClass(this);
}

GarbageCollectedObject::~GarbageCollectedObject()
{
    ClassRepository::RemoveClass(this);
}

void GarbageCollectedObject::IncreaseReferenceCount()
{
    this->referenceCount++;
}

void GarbageCollectedObject::DecreaseReferenceCount()
{
    if (this->referenceCount > 0) {
        this->referenceCount--;
    }
}

int GarbageCollectedObject::GetReferenceCount() const
{
    return this->referenceCount;
}