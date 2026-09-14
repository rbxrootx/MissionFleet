struct RecoveredRect
{
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" __declspec(dllimport) int __stdcall OffsetRect(
    RecoveredRect *, int, int);

#define DEFINE_OFFSET_RECT(address)             \
class Recovered##address                        \
{                                               \
public:                                         \
    void Apply(int horizontal, int vertical);   \
};                                              \
void Recovered##address::Apply(                 \
    int horizontal, int vertical)               \
{                                               \
    OffsetRect((RecoveredRect *)this, horizontal, vertical); \
}

DEFINE_OFFSET_RECT(0053611A)
DEFINE_OFFSET_RECT(00536139)
DEFINE_OFFSET_RECT(00536158)
DEFINE_OFFSET_RECT(0053620B)
DEFINE_OFFSET_RECT(0053622A)
