// Release this object's allocated slot while the process-wide manager exists.
// Clear the slot even when manager teardown has already occurred.
class RecoveredThreadSlots00548B0E {
public:
    void Release(int slot);
};
extern "C" RecoveredThreadSlots00548B0E *Slots005DEB4C;
class CThreadLocalObject {
    int slot;
public:
    ~CThreadLocalObject();
};
CThreadLocalObject::~CThreadLocalObject()
{
    if (slot != 0 && Slots005DEB4C != 0)
        Slots005DEB4C->Release(slot);
    slot = 0;
}
