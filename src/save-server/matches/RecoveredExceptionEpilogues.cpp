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

#define DEFINE_RETURNING_EPILOGUE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm mov eax, dword ptr [ebp-28] \
        EXCEPTION_EPILOGUE_BODY \
    }

DEFINE_EPILOGUE(004673BD)
DEFINE_EPILOGUE(00467A58)
DEFINE_EPILOGUE(00467F98)
DEFINE_EPILOGUE(00468413)
DEFINE_EPILOGUE(0046F544)
DEFINE_EPILOGUE(0046F5F0)
DEFINE_EPILOGUE(00472B22)
DEFINE_RETURNING_EPILOGUE(00466D1E)
DEFINE_RETURNING_EPILOGUE(004672FE)
DEFINE_RETURNING_EPILOGUE(0046795C)
DEFINE_RETURNING_EPILOGUE(00467EA0)
