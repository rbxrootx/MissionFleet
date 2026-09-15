extern "C" void Call004F09D7();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004F0CD9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 2
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004F09D7
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
