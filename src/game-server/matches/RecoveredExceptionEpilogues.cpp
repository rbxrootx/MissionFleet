#define EXCEPTION_EPILOGUE_BODY \
        __asm mov ecx, dword ptr [ebp-16] \
        __asm mov dword ptr fs:[0], ecx \
        __asm pop edi \
        __asm pop esi \
        __asm pop ebx \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret

#define DEFINE_EPILOGUE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        EXCEPTION_EPILOGUE_BODY \
    }

DEFINE_EPILOGUE(004B2044)
DEFINE_EPILOGUE(004B20F0)
