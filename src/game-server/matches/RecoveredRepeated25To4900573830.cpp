extern "C" void Call00575C06();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00573830()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push -1
    __asm push 0xf18c
    __asm push 0xf18c
    __asm call Call00575C06
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
