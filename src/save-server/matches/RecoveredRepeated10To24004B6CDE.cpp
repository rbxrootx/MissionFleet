extern "C" void Call004B6CF1();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004B6CDE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call004B6CF1
    __asm pop ebp
    __asm ret 8
}
