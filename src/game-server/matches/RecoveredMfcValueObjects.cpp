#define DEFINE_CURRENCY_COPY(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov edx, dword ptr [eax+4] \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov dword ptr [eax], ecx \
        __asm mov dword ptr [eax+4], edx \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm mov edx, dword ptr [ebp+8] \
        __asm mov eax, dword ptr [edx+8] \
        __asm mov dword ptr [ecx+8], eax \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

#define DEFINE_PACKED_POINT(address) \
    extern "C" __declspec(naked) void Recovered##address(long) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm movsx eax, word ptr [ebp+8] \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm mov dword ptr [ecx], eax \
        __asm mov edx, dword ptr [ebp+8] \
        __asm shr edx, 16 \
        __asm and edx, 0FFFFh \
        __asm movsx eax, dx \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm mov dword ptr [ecx+4], eax \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

DEFINE_CURRENCY_COPY(0049EB48)
DEFINE_CURRENCY_COPY(0054C7E9)
DEFINE_PACKED_POINT(0053569D)
DEFINE_PACKED_POINT(005359C6)
