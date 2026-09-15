// Release this object's allocated slot while the process-wide manager exists.
// Clear the slot even when manager teardown has already occurred.
class RecoveredThreadSlots00543BAE {
public:
    void Release(int slot);
};
extern "C" RecoveredThreadSlots00543BAE *Slots00687064;
class CThreadLocalObject {
    int slot;
public:
    ~CThreadLocalObject();
};
CThreadLocalObject::~CThreadLocalObject()
{
    if (slot != 0 && Slots00687064 != 0)
        Slots00687064->Release(slot);
    slot = 0;
}
