#include "ClassRepository.h"

std::vector<const GarbageCollectedObject*> ClassRepository::classes;

void ClassRepository::AddClass(const GarbageCollectedObject* klass)
{
    classes.push_back(klass);
}

void ClassRepository::RemoveClass(const GarbageCollectedObject* klass)
{
    classes.erase(std::remove(classes.begin(), classes.end(), klass), classes.end());
}

std::vector<const GarbageCollectedObject*> ClassRepository::GetClasses()
{
    return classes;
}