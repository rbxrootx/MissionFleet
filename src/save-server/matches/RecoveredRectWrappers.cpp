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

DEFINE_OFFSET_RECT(00532572)
DEFINE_OFFSET_RECT(00532591)
DEFINE_OFFSET_RECT(005325B0)
DEFINE_OFFSET_RECT(00532663)
DEFINE_OFFSET_RECT(00532682)
