#include "global_includes.h"
#include "example/example_class.h"
#include "repository/ClassRepository.h"

int main()
{
    auto* exampleClass = new ExampleClass();
    exampleClass->PrintSomething("Lol");

    auto* exampleClass2 = new ExampleClass();
    exampleClass2->PrintSomething("Lol2");

    auto classesBeforeDeletion = ClassRepository::GetClasses();

    for (auto* klass : classesBeforeDeletion)
    {
        if (klass->GetReferenceCount() <= 0)
        {
            INFO("Deleting object " << klass);
            delete klass;
        }
    }

    // check if the classes were actually deleted
    auto classesAfterDeletion = ClassRepository::GetClasses();

    for (auto* klass : classesAfterDeletion)
    {
        INFO("Class " << klass << " has reference count " << klass->GetReferenceCount());
    }

    return 0;
}
