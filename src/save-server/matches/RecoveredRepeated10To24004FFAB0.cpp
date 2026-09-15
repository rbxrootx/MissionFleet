extern "C" void Call004FF9A3();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004FFAB0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm push 1
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004FF9A3
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
