extern "C" void Call00504BA0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00504EA9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ebp - 8], eax
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 2
    __asm lea edx, [ebp - 8]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00504BA0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
