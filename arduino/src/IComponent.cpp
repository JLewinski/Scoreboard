#include <IComponent.h>

IComponent::IComponent(IComponent *_parent, ComponentType _componentType)
    : parent(_parent), componentType(_componentType), children(nullptr), numChildren(0)
{
}

IComponent::IComponent(IComponent *_parent, ComponentType _componentType, int _numChildren)
    : parent(_parent), componentType(_componentType), children(new IComponent *[_numChildren]), numChildren(_numChildren)
{
}

IComponent::~IComponent()
{
    if (numChildren == 0 || children == nullptr)
    {
        return;
    }

    for (size_t i = 0; i < numChildren; i++)
    {
        if (children[i] != nullptr)
        {
            delete children[i];
        }
    }

    delete[] children;
}