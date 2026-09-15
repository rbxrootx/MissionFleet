extern "C" void Call00520C95();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00521479()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0xcc
    __asm call Call00520C95
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
