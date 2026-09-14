#define DEFINE_FRAME_RET(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm pop ebp __asm ret cleanup }

#define DEFINE_FRAME_TRUE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm mov al, 1 __asm pop ebp __asm ret }

#define DEFINE_RETURN_ONE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm mov eax, 1 __asm pop ebp __asm ret }

#define DEFINE_ADJUST(address, operation) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm operation eax, 32 \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_STATUS(address, value, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { __asm push ebp __asm mov ebp, esp __asm mov eax, value __asm pop ebp __asm ret cleanup }

#define DEFINE_SAVE_THIS_RET(address, value, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, value \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

#define DEFINE_SAVE_THIS_ONLY(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

#define DEFINE_SAVE_THIS_MINUS_ONE(address, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm or eax, -1 \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

extern "C" __declspec(naked) void Recovered004A2D80(unsigned int)
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm shr eax, 4
    __asm pop ebp
    __asm ret 4
}

DEFINE_FRAME_RET(00557ACC, 8)
DEFINE_FRAME_TRUE(0047DCF0)
DEFINE_FRAME_TRUE(004C9900)
DEFINE_RETURN_ONE(004B5680)
DEFINE_ADJUST(004BEDF0, add)
DEFINE_ADJUST(004BB930, sub)
DEFINE_STATUS(00490BAD, 080004001h, 20)
DEFINE_STATUS(005636B3, 080040003h, 8)
DEFINE_STATUS(005726ED, 080004005h, 12)
DEFINE_SAVE_THIS_ONLY(00564FF6, 12)
DEFINE_SAVE_THIS_MINUS_ONE(00508667, 20)
