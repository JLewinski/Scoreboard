enum ComponentType
{
    ShiftRegister,
    SegmentDisplay,
    Root,
    LegStrip
};

class IComponent
{
public:
    IComponent *parent;
    IComponent **children;
    int numChildren;
    //virtual void performAction(int *args);
    ComponentType componentType;
    IComponent(IComponent *_parent, ComponentType _componentType);
    IComponent(IComponent *_parent, ComponentType _componentType, int _childrenLength);
    ~IComponent();
};