extern "C" void Call004ED409();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004ED5D1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004ED409
    __asm add esp, 4
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
